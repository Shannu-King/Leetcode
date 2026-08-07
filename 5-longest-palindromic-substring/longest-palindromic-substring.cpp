class Solution {
public:
    string longestPalindrome(string s) {
         int start=0;
         //int maxx=0;
         int len=0;
         int n=s.size();
        for(int i=0;i<n;i++)
        {
            int p1=i,p2=i;
            while(p1>=0&&p2<n&&s[p1]==s[p2])
            {
                p1--;
                p2++;
            }
           int maxx=p2-p1-1;
            if(maxx>len)
           {
            maxx=len;
            start=p1+1;
            len=p2-p1-1;
           }
            p1=i,p2=i+1;
            while(p1>=0&&p2<n&&s[p1]==s[p2])
            {
                p1--;
                p2++;
            }
            maxx=p2-p1-1;
           if(maxx>len)
           {
            
            start=p1+1;
            len=maxx;
           }
           
        }
        return s.substr(start,len);
    }
};