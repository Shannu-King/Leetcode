class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int b=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(a==b)
        return {-1,-1};
        return {a,b-1};
    }
};