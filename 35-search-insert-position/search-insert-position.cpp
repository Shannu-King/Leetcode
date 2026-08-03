class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        target=target-1;
        int ans=lower_bound(nums.begin(),nums.end(),target+1)-nums.begin();
        return ans;
    }
};