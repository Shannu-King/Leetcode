class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minn = INT_MAX;
        for(int i = 0; i < nums.size(); ++i)
        {
            minn = min(minn,nums[i]);
        }
        int ans = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            ans += (nums[i] - minn);
        }
        return ans;
    }
};