class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        int l=1;
        int r=x;
        while(l<=r)
        {
           long long  int mid=l+(r-l)/2;
            if((long long)mid*mid>x)
            {

                r=mid-1;
            }
            else 
            {
                ans=mid;
                l=mid+1;
            }
        }
        return ans;
    }
};