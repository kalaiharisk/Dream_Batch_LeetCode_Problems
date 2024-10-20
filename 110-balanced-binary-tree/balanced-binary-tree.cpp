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
    int checkheight(TreeNode* root)
    {
        if(root==nullptr)
        {
            return 0;
        }
        int leftheight=checkheight(root->left);
        int rightheight=checkheight(root->right);

        if(leftheight==-1 || rightheight==-1)
        {
            return -1;
        }
        if(abs(leftheight-rightheight)>1)
        {
            return -1;
        }
        return max(leftheight,rightheight)+1;
    }
public:
    bool isBalanced(TreeNode* root) {
        return checkheight(root)!=-1;
       



        
    }
};