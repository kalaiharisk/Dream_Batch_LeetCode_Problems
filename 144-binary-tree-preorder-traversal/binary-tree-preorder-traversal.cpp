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
     void  pretra(TreeNode* root,vector<int>& res){
        if(root!=nullptr){
            res.push_back(root->val);
            pretra(root->left,res);
            pretra(root->right,res);
            
        }
   }
public:
   
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        pretra(root,res);
        return res;
        
    }
};