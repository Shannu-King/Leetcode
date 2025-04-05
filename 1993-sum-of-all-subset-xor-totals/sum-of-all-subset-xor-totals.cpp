class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=pow(2,nums.size());
        int m=nums.size();
        int s=0;
        for(int i=0;i<n;i++)
        {
            int ans=0;
            for(int j=0;j<m;j++)
            {
                if(i&(1<<j))
                ans=ans^nums[j];

            }
           // cout<<ans<<" ";
            s+=ans;
        }
        return s;
    }
};