class Solution {
public:
    int maxScore(string s) {
        int o=0,z=0;
        int maxx=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            o++;
        }
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='0')
            {
                z++;

            }
            else
            o--;
            maxx=max(maxx,z+o);
        }
        return maxx;
    }
};