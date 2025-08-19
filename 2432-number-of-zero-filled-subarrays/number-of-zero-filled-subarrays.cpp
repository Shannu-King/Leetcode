class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long int c=0;
        long long ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            c++;
            else{
            ans+=(c*(c+1))/2;
            c=0;
            }
        }
 ans+=(c*(c+1))/2;
        return ans;
    }
};