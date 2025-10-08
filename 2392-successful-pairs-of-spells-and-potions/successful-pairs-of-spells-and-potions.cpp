class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long su) {
        int c=0;
        sort(p.begin(),p.end());
        vector<int>res(s.size(),0);
        for(long long int i=0;i<s.size();i++)
        {
            if(s[i]>=su)
            {
                res[i]=p.size();
                continue;
            }
          int l=0;
          int r=p.size()-1;
          int index=-1;
          while(l<=r)
          {
            int mid=l+(r-l)/2;
            if((long long)(s[i])*(long long)(p[mid])>=su)
            {
                index=mid;
               r=mid-1;
            }
            else
           l=mid+1;
          }
          if(index!=-1)
          res[i]=p.size()-index;

        }
        return res;

    }
};