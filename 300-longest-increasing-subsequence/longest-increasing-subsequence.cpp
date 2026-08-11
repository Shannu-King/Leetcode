class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>t;
        for(int i=0;i<nums.size();i++)
        {
            int pos=lower_bound(t.begin(),t.end(),nums[i])-t.begin();
            if(pos==t.size())
            t.push_back(nums[i]);
            else
            t[pos]=nums[i];
        }
        return t.size();
    }
};