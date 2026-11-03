class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        int maxx = nums[0];
        int res = 0;
        for(int i = 0 ; i < nums.size(); ++i)
        {
            maxx = max(nums[i], maxx);
        }
        for(int i = 0; i < nums.size(); ++i)
        {
            res += abs(maxx - nums[i]);
        }
        return res;
    }
};