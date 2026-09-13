class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]++;
        int c=0;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            nums[i]=nums[i-1]+nums[i];
        }
        for(int i=0;i<n;i++)
        {
            int req=nums[i]-k;
            if(mp.find(req)!=mp.end())
            c+=mp[req];
            mp[nums[i]]++;
        }
        return c;
    }
};