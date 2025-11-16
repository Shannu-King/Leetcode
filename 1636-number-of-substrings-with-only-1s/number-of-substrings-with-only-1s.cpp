class Solution {
public:
    int numSub(string s) {
        int mod=1e9+7;
        int c=0;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
               c=0;
            }
            else
            c++;
           ans=ans%mod;
           c=c%mod;
           ans+=c;
        }
        return ans;
    }
};