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
int fun1(vector<int>&res)
{
    int ans=0;
    int in=0;
    for(int i=res.size()-1;i>=0;i--)
    {
        ans+=pow(2,in)*res[i];
        in++;
    }
    return ans;
}
int fun(TreeNode* root,   vector<int>&res,int &ans)
{
    if(root==nullptr)
    {
        return ans;
    }
    res.push_back(root->val);
    if(root->left==nullptr&&root->right==nullptr)
    ans+=fun1(res);
    fun(root->left,res,ans);
    fun(root->right,res,ans);
    if(res.size())
    res.pop_back();
    return ans;

}
    int sumRootToLeaf(TreeNode* root) {
        vector<int>res;
        int ans=0;
        fun(root,res,ans);
        return ans;
    }
};