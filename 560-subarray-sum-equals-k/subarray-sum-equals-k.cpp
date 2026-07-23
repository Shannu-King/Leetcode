class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int c=0;
       unordered_map<int,int>mp;
       mp[0]++;
       for(int i=1;i<nums.size();i++)
       {
        nums[i]=nums[i-1]+nums[i];
       }
       for(int i=0;i<nums.size();i++)
       {
        int req=nums[i]-k;
        if(mp.find(req)!=mp.end())
        c+=mp[req];
        mp[nums[i]]++;
       }
        return c;
    }
};