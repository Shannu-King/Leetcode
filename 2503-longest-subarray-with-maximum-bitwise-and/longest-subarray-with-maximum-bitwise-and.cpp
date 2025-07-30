class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int init=0;
        int m=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>m)
            m=nums[i];
        }
        int k=INT_MIN;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(m==nums[i])
            count++;
            else
            count=0;
            k=max(count,k);
           
        }
        return k;

    }
};