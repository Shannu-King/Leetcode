class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0)
                j++;
                else if(sum>0)
                k--;
                else{

                ans.insert({nums[i],nums[j],nums[k]});
                j++;
                k--;
                }
            }
        }
        vector<vector<int>>res;
        for(auto it:ans)
        res.push_back(it);
        return res;
    }
};