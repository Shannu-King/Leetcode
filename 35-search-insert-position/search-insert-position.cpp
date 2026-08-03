class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        target=target-1;
        int ans=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        return ans;
    }
};