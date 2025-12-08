class Solution {
public:
    int countTriples(int n) {
        int c=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                int x=(i*i)+(j*j);
                int r=sqrt(x);
               if (1LL*r*r==x&&r<=n)
                c+=2;
            }
        }
        return c;
    }
};