class Solution {
public:
    string maximumXor(string s, string t) {
        int z=0;
        int o=0;
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='1')
            o++;
            else
            z++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                if(z){
                    z--;
                t[i]='0';}
                else {
                    o--;
                t[i]='1';}
            }
            else if(s[i]=='0')
            {
                if(o){
                    o--;
                t[i]='1';}
                else{
                    z--;
                t[i]='0';}
            }
        }
        for(int i=0;i<s.size();i++)
        {
           // cout<<s[i]<<" "<<t[i]<<endl;
            if(s[i]==t[i])
            s[i]='0';
            else
            s[i]='1';
        }
        return s;
    }
};