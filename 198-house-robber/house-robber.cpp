class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev1=0,prev2=0;
        for(int i=0;i<n;i++)
        {
            int curr=max(prev1,prev2+nums[i]);
            prev2=prev1;
            prev1=curr;

        }
        return prev1;
    }
};