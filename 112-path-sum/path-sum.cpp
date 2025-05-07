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
bool dfs(TreeNode* root,int c, int targetSum)
 {
    if(root==nullptr)
    return false;
    c+=root->val;
    if(root->left==NULL&& root->right==NULL)
    {
        if(c==targetSum)
        return true;
        c-=root->val;
        return false;
    }
  return  dfs(root->left,c,targetSum)||dfs(root->right,c,targetSum);
 }
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        int c=0;
        return dfs(root,c,targetSum);
    
    }
};