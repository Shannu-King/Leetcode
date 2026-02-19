class Solution {
public:
    int countBinarySubstrings(string s) {
        int z=0,o=0;
        bool flag=true;
        int c=0;
        if(s[0]=='0')
        z++;
        else
        o++;
        for(int i=1;i<s.size();i++)
        {
           if(s[i]!=s[i-1])
           {
            c+=min(o,z);
               cout<<c<<" ";
            if(s[i-1]=='0')
            o=0;
            else
            z=0;

           }
           if(s[i]=='0')
           z++;
           else
           o++;
      
        }
        c+=min(z,o);
        return c;
    }
};