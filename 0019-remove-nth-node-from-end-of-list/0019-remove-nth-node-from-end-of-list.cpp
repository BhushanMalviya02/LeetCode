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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int sz = 0;
        ListNode* temp = head;

        while(temp != NULL){
            sz++;
            temp = temp->next;
        }

        int k = sz - n;
        

        // ListNode* dummy = new ListNode(0);
        temp = head;

        if(k ==0 ){
            // temp->next = temp->next->next;
            head = temp->next;
        }else{

            for(int i =1;i<k;i++){
                temp= temp->next;
            }
            temp->next= temp->next->next;
            
        }

    
        return head;
    }
};