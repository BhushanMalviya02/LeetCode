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
    struct compare {
        bool operator()(ListNode* a, ListNode* b) { return a->val > b->val; }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {

        priority_queue<ListNode*, vector<ListNode*>, compare> pq;

        int n = lists.size();
        for (int i = 0; i < n; i++) {
            if (lists[i] != NULL) {
                pq.push(lists[i]);
            }
        }

        ListNode* temp = new ListNode(0);
        ListNode* c = temp;

        while (!pq.empty()) {

            ListNode* curr = pq.top();
            pq.pop();

            c->next = curr;
            c = curr;

            if (curr->next != NULL) {
                pq.push(curr->next);
            }
        }
        c->next = NULL;
        return temp->next;
    }
};