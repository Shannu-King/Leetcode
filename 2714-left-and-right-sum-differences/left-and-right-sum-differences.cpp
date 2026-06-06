class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int r=0;
        for(int i=0;i<nums.size();i++)
        {
            r+=nums[i];
        }
        int l=0;
        for(int i=0;i<nums.size();i++)
        {
            r-=nums[i];
            int temp=nums[i];
            nums[i]=abs(l-r);
            l+=temp;
        }
        return nums;
    }
};