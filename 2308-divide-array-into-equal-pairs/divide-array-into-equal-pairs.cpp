class Solution {
public:
    bool divideArray(vector<int>& nums) {
        bitset<501>count;
        count.reset();
        for(int i=0;i<nums.size();i++)
        {
            count.flip(nums[i]);
        }
        if(count.any())
        return false;
        return true;
    }
};