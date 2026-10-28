/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1= 0;
        int len2 =0;
        ListNode* temp = headA;
        ListNode* temp2 = headB;

        while(headA != NULL){
            len1++;
            headA = headA->next;
        }

        while(headB != NULL){
            len2++;
            headB = headB->next;
        }

        int n1 = max(len1,len2);
        int n2 = min(len1,len2);

        int diff = n1-n2;

headA= temp;
headB = temp2;

        if(len1 > len2){
            for(int i=0;i<diff;i++){
                headA = headA->next;

            }
        }else{
            for(int i=0;i<diff;i++){
                headB = headB->next;

            }
        }

        while(headA or headB){
            if(headA == headB){
                return headA;
            }

            headA= headA->next;
            headB = headB->next;
        }
return NULL;
        
    }
};