class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int c=0;
        int d=0;
        int g=0;
        bool flag=true;
        for(int i=0;i<nums.size();i++)
        {
            g++;
            if(nums[i]%2!=0)
            {
                flag=!flag;
            }
            if(g==6)
            {
                flag=!flag;
                g=0;
            }
            if(flag)
            c+=nums[i];
            else
            d+=nums[i];
           
        }
        return c-d;
    }
};