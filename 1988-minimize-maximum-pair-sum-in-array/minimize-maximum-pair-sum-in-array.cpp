class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int minn=(nums[0]+nums[n-1]);
        for(int i=1;i<(nums.size()/2);i++)
        {
            minn=max(minn,(nums[i]+nums[n-1-i]));
        }
        return minn;
    }
};