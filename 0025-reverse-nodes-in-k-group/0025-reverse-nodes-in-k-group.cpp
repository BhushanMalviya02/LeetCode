/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(k ==1 or head == NULL){
            return head;
        }

        ListNode* temp = head;
        int size = 0 ;

        while(temp){
            size++;
            temp = temp->next;
        }

        int times = size / k ;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* grpprev = dummy;

        for(int i = 0 ;i < times ;i++){
            // ...
            ListNode* grpstart = grpprev->next;

            ListNode* grpnext = grpstart;

            for(int g = 0;g<k;g++){
                grpnext = grpnext->next;
            }

            ListNode* prev = grpnext;
            ListNode* curr = grpstart;

            for(int j = 0 ; j < k ; j++){
                // ...

                ListNode* nextnode = curr->next;
                
                curr->next = prev;
                prev = curr;
                curr = nextnode;


            }
            grpprev->next = prev;
            grpprev = grpstart;

            // grpstart = grpnext;
        }

        return dummy->next;
    }
};