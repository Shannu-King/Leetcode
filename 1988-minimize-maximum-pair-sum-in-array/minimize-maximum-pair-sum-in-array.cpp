class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int minn=(nums[0]+nums[nums.size()-1]);
        for(int i=1;i<(nums.size()/2);i++)
        {
            minn=max(minn,(nums[i]+nums[nums.size()-1-i]));
        }
        return minn;
    }
};