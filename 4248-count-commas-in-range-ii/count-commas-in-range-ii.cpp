class Solution {
public:
    long long countCommas(long long n) {
        if(n<=999)
        return 0;
        long long int s=1000;
       long long int ans=0;
        while(s<=n){
            ans+=(n-s+1);
            s=s*1000;
        }
        return ans;

    }
};