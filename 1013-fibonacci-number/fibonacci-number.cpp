class Solution {
public:
int fun(int n)
{
    if(n<=1)
    return n;
    return fun(n-1)+fun(n-2);
}
    int fib(int n) {
        vector<int>dp(n+1,0);
        if(n==0)
        return 0;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        dp[i]=dp[i-1]+dp[i-2];
        return dp[n];
    }
};