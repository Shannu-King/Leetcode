class Solution {
public:
int sums(int n)
{
    long long s=0;
    while(n>0)
    {
        s+=(n%10);
        n=n/10;
    }
    return s;
}
int pros(int n)
{
    long long s=1;
    while(n>0)
    {
        s=s*(n%10);
        n=n/10;
    }
    return s;
}
    bool checkDivisibility(int n) {
        int s=sums(n);
        int p=pros(n);
        return n%(s+p)==0;
    }
};