class Solution {
public:
    int minimumDeletions(string s) {
         int c=0,d=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='a')
            {
                c++;
            }
        }
        int ans=s.size();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            c--;
            ans=min(ans,c+d);
            if(s[i]=='b')
            {
                d++;
            }
        }
       
      return ans;
    }
};