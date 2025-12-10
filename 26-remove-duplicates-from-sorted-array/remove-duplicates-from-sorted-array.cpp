class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                nums.erase(nums.begin()+i);
                i--;
                c++;
            }
        }
        return nums.size();
    }
};