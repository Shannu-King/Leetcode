class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
       long long  int s=0,t=0;
        int m=nums2.size();
        int n=nums1.size();
        int c=0;
        int d=0;
         for(int i=0;i<n;i++)
         {     
          s+=nums1[i];
          if(nums1[i]==0)
          c++;
        }
        for(int i=0;i<m;i++)
        {
            t+=nums2[i];
            if(nums2[i]==0)
            d++;
        }
        if((s+c)>(t+d))
        {
           if(d==0)
           return -1;
        }
         if((s+c)<(t+d))
        {
            if(c==0)
            return -1;
            return t+d;
        }
        return max(s+c,t+d);
       

    }
};