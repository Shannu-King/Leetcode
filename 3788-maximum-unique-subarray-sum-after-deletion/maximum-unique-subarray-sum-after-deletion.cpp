class Solution {
public:
    int maxSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        if(nums[nums.size()-1]<0)
            return nums[nums.size()-1];
        int s=0;
        map<int,int>mp;
    for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]<0)
                break;
           
            if(mp[nums[i]]<1)
            s+=nums[i];
            mp[nums[i]]++;
            
        }
        return s;
    }
};