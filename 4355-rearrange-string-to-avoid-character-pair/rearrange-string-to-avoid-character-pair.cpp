class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string t="";
        t.reserve(s.size());
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==y)
             t+=s[i];
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=y)
            t+=s[i];
        }
        return t;
    }
};