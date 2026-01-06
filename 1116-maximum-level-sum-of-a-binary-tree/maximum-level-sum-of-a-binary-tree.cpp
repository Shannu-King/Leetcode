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
         queue<pair<long long int,TreeNode *>>q;
        q.push({1,root});
        vector<pair<long long int,TreeNode *>>v;
        while(!q.empty())
        {
            TreeNode *m=q.front().second;
            int n=q.front().first;
            v.push_back(q.front());
            q.pop();
            if(m->left!=NULL)
            q.push({n+1,m->left});
            if(m->right!=NULL)
            q.push({n+1,m->right});
        }
        //int w=root->val;
        sort(v.begin(),v.end());
        long long s=0;
        long long maxx=INT_MIN;

        int ans=-1;
       for(int i=0;i<v.size();i++)
       {
        s+=v[i].second->val;
        if(i==v.size()-1||v[i].first!=v[i+1].first)
        { 
            if(s>maxx)
            {
                ans=v[i].first;
                maxx=s;
               // cout<<v[i].first<<" ";
            }
            s=0;
           
        }
       
        
       }
       if(s>maxx)
       {
        maxx=s;
        ans=v[v.size()-1].first;
       }
      return ans;
        
    }
};