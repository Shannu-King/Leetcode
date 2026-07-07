class Solution {
public:
string fun(int n)
{
    string k="";
    while(n>0)
    {
        if(n%10)
        k+=((n%10)+'0');
        n/=10;
    }
    reverse(k.begin(),k.end());
    return k;
}
int sums(int n)
{
    int c=0;
    while(n>0)
    {
        c+=(n%10);
        n=n/10;
    }
    return c;
}
    long long sumAndMultiply(int n) {
        int s=n;
        string st=fun(s);
        if(st=="")
        return 0;
        int k=stoi(st);
        int l=sums(n);
        return (long long)k*l;


    }
};