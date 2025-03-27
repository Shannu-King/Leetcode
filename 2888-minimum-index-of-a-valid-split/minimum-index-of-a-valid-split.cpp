class Solution {
public:
    int minimumIndex(vector<int>& nums) {
      map<int,int>mp;
      int n=nums.size();
      for(int i=0;i<n;i++)
      {
        mp[nums[i]]++;
      }
      int maxx=INT_MIN;
      int maxxi=-1;
      for(const auto&my :mp)
      {
        if(my.second>maxx)
        {
            maxxi=my.first;
            maxx=my.second;
        }
      }
     
      int c=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==maxxi)
        c++;
        if((c>=1&&c>(i+1)/2)&&(maxx-c)>(n-i-1)/2)
        return i;
    }
    return -1;

    }
};