class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;
        while(n>0)
        {
            int k=n%10;
            ans.push_back(k);
            n/=10;
        }
        sort(ans.begin(),ans.end());
        int k=ans.size();
        return ans[k-1]*ans[k-2];
    }
};