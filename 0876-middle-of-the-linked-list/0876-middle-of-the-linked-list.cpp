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
    ListNode* middleNode(ListNode* head) {
        

        int len =0;

        ListNode* temp = head;

        while(temp != NULL ){
            len++;
            temp = temp->next;
        }
        // int mid=0;

        // if(len %2 == 0){

        //     mid = len/2;
            
        // }else{
        //     mid = (len/2);
        // }

        int mid = (0+ len)/2;
        temp = head;

        // int nc = 0;
        for(int i=0;i<mid;i++){

            temp= temp->next;

            
        }
        return temp;




        // cout<<len;
        // return head;
    }
};