class Solution {
public:
    long long getDescentPeriods(vector<int>& p) {
       long long  int c=1;
        long long int ans=0;
        for(int i=0;i<p.size()-1;i++)
        {
            if((p[i]-p[i+1])==1)
            {
                c++;
            }
            else
            {
                ans+=((c*(c+1))/2);
                c=1;
            }
        }
        ans+=((c*(c+1))/2);
        return ans;
    }
};