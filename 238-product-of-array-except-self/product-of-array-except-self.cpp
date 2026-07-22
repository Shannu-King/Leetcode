class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int c=0;
        long long s=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            c++;
            else
            s=s*nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(c>1)
            nums[i]=0;
           
            else if(nums[i]==0&&c==1)
            nums[i]=s;
            else if(c==1)
            nums[i]=0;
            else
            nums[i]=s/nums[i];
        }
        return nums;
        
    }
};