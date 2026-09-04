class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>small(n);
        int minn=nums[n-1];
        for(int i=n-1;i>=0;i--)
        {
            minn=min(minn,nums[i]);
            small[i]=minn;
        }
        minn=0;
        int maxx=nums[0];
        for(int i=0;i<n;i++)
        {
             maxx=max(maxx,nums[i]);
            if(maxx-small[i]<=k)
            return i;
        }
        return -1;
    }
};