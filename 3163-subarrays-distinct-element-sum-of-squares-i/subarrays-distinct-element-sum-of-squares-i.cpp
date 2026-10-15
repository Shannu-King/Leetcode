class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum = 0;
        int size = nums.size();
        for(int i = 0; i < size; ++i)
        {
            unordered_map<int,int>mp;
            for(int j = i; j < size; ++j)
            {
                mp[nums[j]] ++;
                sum += (mp.size() * mp.size());
            }
        }
        return sum;
    }
};