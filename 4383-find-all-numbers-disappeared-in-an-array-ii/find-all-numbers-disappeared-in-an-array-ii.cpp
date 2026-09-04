class Solution {
public:
bool fun(vector<int>& v,int x)
{
    int l=0;
    int r=v.size()-1;

    while(l<=r)
    {
        int mid=l+(r-l)/2;

        if(v[mid]==x)
        return false;

        if(v[mid]<x)
        l=mid+1;
        else
        r=mid-1;
    }

    return true;
}
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        int s=0,e=0;
        for(int i=lower;i<=upper;i++)
        {
            bool flag=fun(nums,i);
           if(s==0)
           {
            if(flag)
            {
                s=i;
            }
           }
           else
           {
            if(!flag){
            e=i-1;
             res.push_back({s,e});
            s=0,e=0;}
           }
           
          


        }
        if(s!=0)
        res.push_back({s,upper});
        return res;
    }
};