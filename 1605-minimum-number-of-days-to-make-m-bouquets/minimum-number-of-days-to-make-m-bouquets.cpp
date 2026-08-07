class Solution {
public:
bool fun(vector<int>& b, int m, int k,int mid)
{
    int c=0;
    int s=0;
    for(int i=0;i<b.size();i++)
    {
        if(b[i]>mid)
        {
            c+=(s/k);
            s=0;
        }
        else
        s++;
    }
    c+=(s/k);
    return c>=m;
}
    int minDays(vector<int>& b, int m, int k) {
        int maxx=0;
        if ((long long)m * k > b.size())
    return -1;
        for(int i=0;i<b.size();i++)
        {
            maxx=max(maxx,b[i]);
        }
        int l=1,r=maxx;
        int ans=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(fun(b,m,k,mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
            l=mid+1;
        }
        return ans;
    }
};