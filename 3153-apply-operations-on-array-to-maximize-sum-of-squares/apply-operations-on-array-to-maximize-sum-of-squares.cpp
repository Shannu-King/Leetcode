class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        vector<int>count(32,0);
        const int mod = 1e9 + 7;
        for(int i = 0; i < nums.size(); ++i)
        {
            for(int j = 0; j < 32; ++j)
            {
                if(nums[i] & (1 << j))
                count[j] ++;
            }
        }
        int res = 0;
        for(int i = 0; i < k; ++i)
        {
            int x = 0;
            for(int j = 0; j < 32; ++j)
            {
                if(count[j] > 0)
                {
                     x |= (1 << j);
                     count[j]--;
                }
            }
            res = (res + (1LL * x * x) ) % mod;
        }
        return res;
    }
};