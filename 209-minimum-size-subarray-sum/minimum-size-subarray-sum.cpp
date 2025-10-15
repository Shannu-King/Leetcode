class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int start=0;
        int s=0;
        for(int end=0;end<nums.size();end++)
        {
            s+=nums[end];
            while(s>=target)
            {
                s-=nums[start];
                ans=min(ans,end-start+1);
                start++;
                
            }

        }
        return ans==INT_MAX?0:ans;
    }
};