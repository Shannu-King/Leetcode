class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int s=nums[0];
        sort(nums.begin()+1,nums.end());
        return s+nums[1]+nums[2];
    }
};