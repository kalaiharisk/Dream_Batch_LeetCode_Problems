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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if(!root)  return -1;
        vector<long long>levelsums;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            long long levelsum=0;
            for(int i=0;i<size;i++)
            {
                     TreeNode* node=q.front();
                     q.pop();
                     levelsum+=node->val;
                     
                     if(node->left) q.push(node->left);
                     if(node->right) q.push(node->right);
            }
            levelsums.push_back(levelsum);
        }
        sort(levelsums.begin(),levelsums.end(),greater<long long>());
        if(k>levelsums.size())  return -1;
        return levelsums[k -1 ];


        
    }
};