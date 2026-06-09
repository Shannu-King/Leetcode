class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int maxx=nums[0];
        int minn=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            maxx=max(maxx,nums[i]);
            minn=min(minn,nums[i]);
        }
        return k*(long long )(maxx-minn);
    }
};