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
     int minValue(TreeNode* root)
     {
        int minn=root->val;
        while(root->left!=nullptr)
        {
            minn=root->left->val;
            root=root->left;
        }
        return minn;
     }
public:
    TreeNode* deleteNode(TreeNode* root, int val) {
        if(root==nullptr)
        {
            return nullptr;
        }
        if(root->val<val)
        {
            root->right=deleteNode(root->right,val);
        }
        else if(root->val>val)
        {
            root->left=deleteNode(root->left,val);
        }
        else
        {
            if(root->left==nullptr)
            {
                return root->right;
            }
            else if(root->right==nullptr)
            {
                return root->left;
            }
            root->val=minValue(root->right);
            root->right=deleteNode(root->right,root->val);
        }
        return root;
        
    }
};