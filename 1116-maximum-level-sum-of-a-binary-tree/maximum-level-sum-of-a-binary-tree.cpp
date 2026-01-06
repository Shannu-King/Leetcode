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
    int maxLevelSum(TreeNode* root) {
         queue<TreeNode*> q;
        q.push(root);

        int level = 1;
        int ans = 1;
        long long maxsum = LLONG_MIN;

        while (!q.empty()) {
            int size = q.size();
            long long currsum = 0;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                currsum += node->val;

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            if (currsum > maxsum) {
                maxsum = currsum;
                ans = level;
            }

            level++;
        }

        return ans;
    }
};