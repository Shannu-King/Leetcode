class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int c=0;
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=nums[i-1]+nums[i];
            
        }
        map<int,int>mp;
        mp[0]++;
        for(int i=0;i<nums.size();i++)
        {
            int target=nums[i]-k;
            if(mp[target])
            c+=mp[target];
            mp[nums[i]]++;
        }
        return c;
    }
};