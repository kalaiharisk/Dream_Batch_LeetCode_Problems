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
    void inorder(TreeNode* root,int  &countt)
    {
        if(root!=nullptr)
        {
            inorder(root->left,countt);
            countt++;
            inorder(root->right,countt);
        }
    }
public:
    int countNodes(TreeNode* root) {
        int countt=0;
        if(root==nullptr)
        {
            return 0;
        }
        inorder(root,countt);
        return countt;
        
    }
};