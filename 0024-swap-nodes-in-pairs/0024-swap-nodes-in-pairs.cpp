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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = new ListNode(0);
        temp->next = head;

        ListNode* prev = temp;
        

        while(prev->next and prev->next->next ){
            ListNode* first = prev->next;
            ListNode* second = first->next;
            // ListNode* temp = first;
            // second = first->next;
            // first->next = second->next;
            // second->next= first;
            // first = first->next->next;

            prev->next = second;
            first->next = second->next;
            second->next = first;

            prev = first;
            
        }
        return temp->next;
    }
};