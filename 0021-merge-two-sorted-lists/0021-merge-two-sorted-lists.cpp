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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        priority_queue<int,vector<int>,greater<int>>pq;

        ListNode* one = list1;
        ListNode* two = list2;

        while(one != NULL){
            int value = one->val;

            pq.push(value);
            one = one->next;
        }
        while(two != NULL){
            int value2 = two->val;

            pq.push(value2);
            two = two->next;
        }

        ListNode* temp = new ListNode(0);
        ListNode* curr = temp;



        while(!pq.empty()){
             
             curr->next = new ListNode(pq.top());
             pq.pop();
             curr = curr->next;


        }

return temp->next;
    }
};