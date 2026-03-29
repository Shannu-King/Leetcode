class Solution {
public:
    bool canBeEqual(string s, string t) {
        if(s[0]!=t[0])
        swap(s[2],s[0]);
         if(s[1]!=t[1])
        swap(s[1],s[3]);
        //cout<<s;
        return s==t;
    }
};