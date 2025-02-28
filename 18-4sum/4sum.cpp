class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         set<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++){
            int k=j+1;
            int l=n-1;
            
            while(k<l)
            {
                long long int sum=(long long)nums[i]+nums[j]+nums[k]+nums[l];
                if(sum<target)
               k++;
                else if(sum>target)
                l--;
                else{

                ans.insert({nums[i],nums[j],nums[k],nums[l]});
                k++;
                l--;
                }
            
            }}
        }
        vector<vector<int>>res;
        for(auto it:ans)
        res.push_back(it);
        return res;
    }
};