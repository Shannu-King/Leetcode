class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        double minn=INT_MAX;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n/2;i++)
        {
            minn=min(minn,(double)(nums[i]+nums[n-1-i])/2.0);
        }
        return minn;
    }
};