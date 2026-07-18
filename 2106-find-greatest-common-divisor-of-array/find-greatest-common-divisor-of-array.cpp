class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minn=INT_MAX;
        int maxx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            minn=min(nums[i],minn);
            maxx=max(nums[i],maxx);
        }
        return gcd(maxx,minn);
    }
};