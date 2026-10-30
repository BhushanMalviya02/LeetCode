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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* temp = head;

        int sz =0;

        while(temp){
            sz++;
            temp = temp->next;

        }

        // int first = k;
        int second = sz - k + 1;
        temp = head;

        for(int i =1;i<k;i++){
            temp = temp->next;
        }
        ListNode* node1 = temp ;
        temp = head;

        for(int i =1;i<second;i++){
            temp = temp->next;
        }
        ListNode* node2 = temp;

        swap(node1->val , node2->val);

        return head;
    }
};