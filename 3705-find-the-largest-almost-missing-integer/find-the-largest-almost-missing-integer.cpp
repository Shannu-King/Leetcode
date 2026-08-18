class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int ans1=nums[0];
        if(k==nums.size())
        {
             int maxx=0;
             for(int i=0;i<nums.size();i++)
                 {
                     if(nums[i]>maxx)
                         maxx=nums[i];
                 }
            return maxx;
        }
        if(k==1)
        {
            bool check=true;
            for(int i=0;i<nums.size()-1;i++)
                {
                    if(nums[i]!=nums[i+1])
                        check=false;
                }
            if(check)
                return -1;
            int maxx=0;
            map<int,int>mp;
             for(int i=0;i<nums.size();i++)
                 {
                   mp[nums[i]]++;
                 }
             int maxValue = -1; 
    int keyWithMaxValue = -1;
            for(const auto pair:mp)
                {
                    if(pair.second==1)
                    {
                        if (pair.first > maxValue) { 
                maxValue = pair.first;
                keyWithMaxValue = pair.first;
                        
                    }
                }
           
        }
            return maxValue;
                }
        bool flag1=true;
        bool flag2=true;
        int ans2=nums[nums.size()-1];
        
        for(int i=1;i<nums.size()-1;i++)
            {
                if(nums[i]==ans1)
                {
                    flag1=false;
                }
                if(nums[i]==ans2)
                {
                    flag2=false;
                }
                        }
                    if(ans1==ans2)
            return -1;
        if(flag1&&flag2)
            return max(ans1,ans2);
        if(flag1)
            return ans1;
        if(flag2)
            return ans2;
        return -1;
    }
};