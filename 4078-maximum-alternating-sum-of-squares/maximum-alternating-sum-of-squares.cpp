class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
        int size = nums.size();
        for(int i = 0; i < size; ++i)
        {
            if(nums[i] < 0)
            nums[i] = - nums[i];
        }
        sort(nums.rbegin(), nums.rend());
        long long res = 0;
        for(int i = 0; i < ceil(size / 2.0); ++i)
        {
            res += (nums[i] * nums[i]);
        }
        for(int i = ceil(size / 2.0); i < size; ++i)
        res -= (nums[i] * nums[i]);
        return res;
    }
};