class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        vector<int>pre;
        vector<int>suff(nums.size(),0);
        int maxx=nums[0];
        int minn=nums[nums.size()-1];
        for(int i=0;i<nums.size();i++)
        {
            maxx=max(maxx,nums[i]);
            pre.push_back(maxx);
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            minn=max(minn,nums[i]);
            suff[i]=minn;
            //cout<<minn<<" ";
        }
       // reverse(suff.begin(),suff.end());
        long long int ans=0;
        for(int i=1;i<nums.size()-1;i++)
        {
            ans=max(ans,(long long)(pre[i-1]-nums[i])*suff[i+1]);
        }
        return ans;
    }
};