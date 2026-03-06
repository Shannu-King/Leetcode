class Solution {
public:
    bool checkOnesSegment(string s) {
        bool flag=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1'&&flag)
            return false;
            if(s[i]=='0')
            flag=true;
        }
        return true;
    }
};