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

    void helper(TreeNode* l,TreeNode* r,bool& istrue){

        if(l == NULL and r == NULL){
            return;
        }

        if(l == NULL or r == NULL){
            istrue= false;
            return;
        }

        if(l->val != r->val){
            istrue = false;
            return;
        }

        helper(l->left, r->right,istrue);
        helper(l->right,r->left,istrue);

        


    }

    bool isSymmetric(TreeNode* root) {

        if(root == NULL){
            return true;
        }

        bool istrue = true;

        helper(root->left,root->right,istrue);

        return istrue;
        
    }
};