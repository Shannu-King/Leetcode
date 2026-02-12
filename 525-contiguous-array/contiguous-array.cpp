class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        mp[0]=-1;
        int ans=0;
        int p=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            p++;
            else
            p--;
            if(mp.count(p))
            {
                ans=max(ans,i-mp[p]);
            }
            else
            mp[p]=i;
        }
        return ans;
    }
};