class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
      int minn=INT_MAX;
      int maxx=INT_MIN;
      if(nums.size()==1)
      return 1;
      int n=nums.size();
      int minnindex=0;
      int maxxindex=0;
      for(int i=0;i<nums.size();i++)
      {
        if(nums[i]>maxx)
        {
            maxx=nums[i];
            maxxindex=i;
        }
         if(nums[i]<minn)
        {
            minn=nums[i];
            minnindex=i;
        } 
      } 
     
     int l=max(minnindex+1,maxxindex+1);
     int r=max(n-minnindex,n-maxxindex);
      int bb=min(minnindex+1,n-minnindex)+min(maxxindex+1,n-maxxindex);
      return min({l,r,bb});


    }
};