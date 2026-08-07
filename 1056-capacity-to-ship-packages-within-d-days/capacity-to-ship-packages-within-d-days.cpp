class Solution {
public:
bool fun(vector<int>& w ,int mid,int d)
{
    int c=1;
    int s=0;
    for(int i=0;i<w.size();i++)
    {
         if (w[i] > mid)
            return false;
        if(s+w[i]>mid)
        {
            c++;
           // cout<<i<<" "<<s<<endl;
            s=0;
        }
        s+=w[i];
    }
    return c<=d;
}
    int shipWithinDays(vector<int>& w ,int d) {
        int s=0;
        for(int i=0;i<w.size();i++)
        s+=w[i];
        int l=1,r=s;
        int ans=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(fun(w,mid,d)){
                ans=mid;
            r=mid-1;}
            else
            l=mid+1;
        }
        return ans;
    }
};