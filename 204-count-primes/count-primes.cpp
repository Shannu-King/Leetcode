class Solution {
public:
vector<bool>fun(int n)
{
    vector<bool>p(n+1,true);
    p[0]=false,p[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i]){
        for(int j=i*i;j<=n;j+=i)
        {
            p[j]=false;
        }
        }
    }
    return p;
}
    int countPrimes(int n) {
        vector<bool>p=fun(n);
        int c=0;
        for(int i=0;i<p.size()-1;i++)
        {
            if(p[i]){
                // cout<<i<<endl;
            c++;
           }
        }
        return c;
        
    }
};