class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;
        while(true)
        {
            if(mp[original])
           
            original*=2;
            else
             return original;
        }
        return 0;
    }
};