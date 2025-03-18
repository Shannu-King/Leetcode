class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int j=0;
        int mask=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            while(mask&nums[i])
            {
                mask=mask^(nums[j++]);
            }
            mask=mask|(nums[i]);
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};