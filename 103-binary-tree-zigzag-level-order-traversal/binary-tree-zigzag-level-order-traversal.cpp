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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root == nullptr)
        return {};
        queue<TreeNode *>queue;
        queue.push(root);
        bool flag = false;
        while(!queue.empty())
        {
           vector<int>temp;
            int levelSize = queue.size();
            for(int i = 0; i < levelSize; ++i)
            {
                 TreeNode * curr =queue.front();
                 queue.pop();
                temp.push_back(curr->val);
                if(curr->left)
                queue.push(curr->left);
                if(curr->right)
                queue.push(curr->right);
            }
            if(flag)
            reverse(temp.begin(),temp.end());
            flag = ! flag;
            result.push_back(temp);
        }
        return result;

    }
};