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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int sz = 0 ;

        ListNode* temp = head;

        while(temp != NULL){
            sz++;
            temp = temp->next;
        }

        vector<ListNode*>res;
        temp = head;

        int len = 0;
        if(sz <= k){
            while(temp != NULL){
                ListNode* t = temp;
                res.push_back(t);
                len++;
                temp = temp->next;
                t->next = NULL;
            }
            while(len < k){
                res.push_back(NULL);
                len++;
            }
        }else{

            int mod = sz % k;

            temp = head;//
            // ListNode* r = head;
            

            if(mod == 0){
                while(temp!= NULL){
                    
                    int div = sz/k;
                    // r = temp;
                    ListNode* r = temp;
                    res.push_back(temp);
                    for(int i =1;i<div;i++){
                        r = r->next;
                        // temp = temp->next;
                    }
                    temp = r->next;
                    r->next = NULL;

                                      

                }

            }else{
                
                while(temp!= NULL ){
                    int div= sz/k;
                    

                    while(mod > 0 ){

                    int move = mod+div;
                    ListNode* r = temp;
                    res.push_back(temp);
                    for(int i =0;i<div ;i++){
                        r = r->next;                
                    }
                    temp = r->next;
                    r->next = NULL;
                    mod--;
                    }

                    //  int div = sz/k;
                    // r = temp;
                    ListNode* r = temp;
                    res.push_back(temp);
                    for(int i =1;i<div;i++){
                        r = r->next;
                        // temp = temp->next;
                    }
                    temp = r->next;
                    r->next = NULL;



                    
                }
                

                
            }


        }

        return res;


    }
};