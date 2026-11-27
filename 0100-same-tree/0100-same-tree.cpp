/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void helper(TreeNode* p, TreeNode* q,bool& istrue){
        if(p == NULL and q == NULL){
            
            return;
        }

        if(p == NULL or q == NULL){

            istrue = false;
            return;
        }

        if(p->val != q->val){
            istrue = false;
            return;
        }

        helper(p->left,q->left,istrue);
        // bool lt = istrue;


        helper(p->right,q->right,istrue);
        return;
        // bool rt = istrue


        // if(lt == true and rt == true){
        //     return;
        // }else{
        //     istrue = false;
        //     return;
        // }
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {

        bool istrue = true;

        helper(p,q,istrue);


        return istrue;        
    }
};