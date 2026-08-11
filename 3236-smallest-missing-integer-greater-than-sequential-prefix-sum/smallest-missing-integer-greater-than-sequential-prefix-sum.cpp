class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int,int>mp;
        long long s=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        s=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+1)
            s+=nums[i];
            else
            break;
           
            
        }
        for(int i=s;i<=s+50;i++)
        {
            if(mp.find(i)==mp.end())
            return i;
        }
        return s;
    }
};