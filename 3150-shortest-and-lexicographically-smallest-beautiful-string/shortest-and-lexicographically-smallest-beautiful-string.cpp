class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
   int z=0,o=0;
        int minn=INT_MAX;
        string ans="";

        for(int i=0;i<s.size();i++) {
            if(s[i]=='1')
                o++;

            while(o>k) {
                if(s[z]=='1')
                    o--;
                z++;
            }

            if(o==k) {
                while(s[z]=='0')
                    z++;

                int len=i-z+1;

                if(len<minn) {
                    minn=len;
                    ans=s.substr(z,len);
                }
                else if(len==minn) {
                    string t=s.substr(z,len);
                    if(t<ans)
                        ans=t;
                }
            }
        }

        return ans;
    }
};