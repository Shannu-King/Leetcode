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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode *> queue1;
        if(root==nullptr)
        return {};
      queue1.push(root);
       
        
       
       // unordered_map< pair <vector <int> ,int >> freqMap1;
        vector<int>res;
        while(!queue1.empty())
        {
           
             int last = 0;
              int levelSize = queue1.size();
           for(int i = 0; i < levelSize; i++)
           {
                TreeNode * curr = queue1.front();
                queue1.pop();
              last = curr->val;
               if(curr->left)
               queue1.push(curr->left);
                if(curr->right)
               queue1.push(curr->right);
               
           }
           res.push_back(last);
        }
        return res;


    }
};