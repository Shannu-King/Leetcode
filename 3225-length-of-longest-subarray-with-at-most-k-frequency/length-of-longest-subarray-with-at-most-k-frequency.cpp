class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int l=0;
        int maxx=0;
        for(int r=0;r<nums.size();r++)
        {
            mp[nums[r]]++;
            while(l<nums.size()&&mp[nums[r]]>k)
            {

                mp[nums[l]]--;
                if(mp[nums[l]]==0)
                mp.erase(nums[l]);
                                l++;
            }
            maxx=max(maxx,r-l+1);
        }
        return maxx;
    }
};