class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev1=0,prev2=0;
        if(nums.size()==1)
        return nums[0];
        for(int i=0;i<n-1;i++)
        {
            int curr=max(prev1,prev2+nums[i]);
            prev2=prev1;
            prev1=curr;

        }
        int maxx=prev1;
        prev1=0,prev2=0;
         for(int i=1;i<n;i++)
        {
            int curr=max(prev1,prev2+nums[i]);
            prev2=prev1;
            prev1=curr;

        }
        return max(maxx,prev1);

    }
};