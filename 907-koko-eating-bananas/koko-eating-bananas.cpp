class Solution {
public:
bool fun(vector<int>& p, int k,int h)
{
   long long int c=0;
    for(int x:p)
    {
       long long int l=x/k;
        if(x%k)
        l+=1;
        c+=l;

        // cout<<l<<" "<<k<<" ";
        //  cout<<endl;
    }
   
    
    return c<=h;
}
    int minEatingSpeed(vector<int>& p, int h) {
        int s=0;
        int maxx=0;
        for(int i=0;i<p.size();i++)
        {
            maxx=max(p[i],maxx);
        }
        int l=1,r=maxx;
        int mid=0;
        int ans=0;
       // cout<<maxx<<endl;
        while(l<=r)
        {
             mid=l+(r-l)/2;
            if(fun(p,mid,h))
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