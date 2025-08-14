class Solution {
public:
    string largestGoodInteger(string nums) {
        string ans="";
        string maxx="";
        for(int i=0;i<nums.size()-2;i++)
        {
            if(nums[i]==nums[i+1]&&nums[i+1]==nums[i+2])
            {
                ans=nums[i];
                 maxx=max(maxx,ans);
            }
         
        }
        if(maxx!="")
        return maxx+maxx+maxx;
        return maxx;

        
    }
};