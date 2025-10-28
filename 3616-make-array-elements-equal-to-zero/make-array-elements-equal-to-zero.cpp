class Solution {
public:
bool fun(vector<int> nums,int i,int d)
{
    int n=nums.size();
    while(i>=0&&i<n)
    {
        if(nums[i]==0)
        {
            i+=d;
        }
        else
        {
             nums[i]--;
            d=d*-1;
            i+=d;
           
        }

    }
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=0)
        return false;
    }
    return true;
}
    int countValidSelections(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
               if( fun(nums,i,1))c++;
               if( fun(nums,i,-1))c++;
            }
        }
        return c;
    }
};