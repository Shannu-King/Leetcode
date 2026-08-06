class Solution {
public:
int pro(int n)
{
    long long ans=1;
    while(n>0)
    {
        ans=ans*(n%10);
        n/=10;
    }
    return ans;
}
    int smallestNumber(int n, int t) {
        for(int i=n;i<=n+100;i++)
        {
            if(pro(i)%t==0)
            return i;
        }
        return n;
    }
};