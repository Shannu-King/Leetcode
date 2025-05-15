class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
       
        while(nums.size()>1)
        {
            vector<int>res;
            for(int i=0;i<nums.size()-1;i++)
            {
                int ans=(nums[i]+nums[i+1])%10;
                res.push_back(ans);
            }
            nums.clear();
            nums=res;
            res.clear();

        }
        return nums[0];
    }
};