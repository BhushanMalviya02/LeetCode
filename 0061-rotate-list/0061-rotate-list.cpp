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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL or head->next == NULL or k == 0){
            return head;
        }
        int sz = 0;
        ListNode* temp = head;
        while(temp != NULL){
            sz++;
            temp = temp->next;
        }
        

        k = k % sz;
        if(k == 0){
            return head;
        }
        
        int n = sz -k ;
        temp = head;
        for(int i =0;i<n-1;i++){
            temp = temp->next;            
        }
// cout<<temp->val;.
        ListNode* x = temp->next;
        ListNode* tempx = x;

        temp->next = NULL;

        while(x->next != NULL){
            x = x->next;

        }
        x->next = head;

        head = tempx;


        return head;
    }
};