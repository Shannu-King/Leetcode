class Solution {
public:
    int canBeTypedWords(string a, string b) {
        map<char,int>mp;
        for(int i=0;i<b.size();i++)
        {
            mp[b[i]]++;
        }
        int c=0;
        bool flag=true;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==' ')
            {
                if(flag)
                c++;
                flag=true;
            }
            else
            {
                if(mp[a[i]]){
                flag=false;
               // cout<<a[i]<<" ";
                }
            }
        }
        if(flag)
        c++;
        return c;
    }
};