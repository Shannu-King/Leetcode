class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
    //     int c=0;
    //     int d=0;
    //     int n=nums.size();
    //     int m=n/2;
    //    long long int s=0;
    //     for(int i=0;i<n;i++)
    //     s+=nums[i];
    //     long long int t=0;
    //     for(int i=0;i<m;i++)t+=nums[i];
    //     if(t>(s-t))
    //     c++;
    //     else if(t<(s-t))
    //     d++;
    //     for(int j=m;j<n-1;j++)
    //     {
    //         t=t+nums[j]-nums[j-m];
    //          if(t>(s-t))
    //     c++;
    //     else if(t<(s-t))
    //     d++;
            
    //     }
    //     return c+d;

    int c=0;
    int n=nums.size();
    int m=n/2;
    long long int s=0,t=0;
    for(int i=0;i<m;i++)s+=nums[i];
    for(int j=m;j<n;j++)t+=nums[j];
   long long int i=0,j=m;
    while(j<n)
    {
        if(s<t||t<s)
        c++;
        s=s-nums[i]+nums[j];
        t=t-nums[j]+nums[i];
        i++;
        j++;
    }
    return c;
    }
};