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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        queue<TreeNode*>q;

        vector<vector<int>>res;

        if(root == NULL)return res;
        

        q.push(root);

        while(!q.empty()){

            int lvlsz = q.size();
            vector<int>temp;
            

            while(lvlsz--){

                TreeNode* tt = q.front();
                q.pop();


              

                temp.push_back(tt->val);
                

                if(tt->left != NULL){
                    q.push(tt->left);
                }

                if(tt->right != NULL){
                    q.push(tt->right);
                }

            }

            res.push_back(temp);
        }

        reverse(res.begin(),res.end());
return res;
    }
};