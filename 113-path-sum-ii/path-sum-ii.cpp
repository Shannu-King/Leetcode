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
int sums(vector<int>arr)
{
    int c=0;
    for(int i=0;i<arr.size();i++)
    {
        c+=arr[i];
    }
 
    return c;
}
void dfs(TreeNode* root, vector<int>ans,int targetSum,vector<vector<int>>&res)
{
       cout<<"Hello"<<" ";
    if(root==nullptr)
    return;
    ans.push_back(root->val);
    if(root->left==NULL &&root->right==NULL)
    {
       
    if(sums(ans)==targetSum)
    {
        
        res.push_back(ans);
        ans.pop_back();
        return;
    }
    }
     dfs(root->left,ans,targetSum,res);
      dfs(root->right,ans,targetSum,res);

    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>res;
        vector<int>ans;
        dfs(root,ans,targetSum,res);
        return res;
    }
};