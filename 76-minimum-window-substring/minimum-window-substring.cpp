class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp1;
        for(int i=0;i<t.size();i++)
        {
            mp1[t[i]]++;
        }
        int needed=mp1.size();
        int req=0;
        int start=0,end=0;
        int minn=INT_MAX;
        unordered_map<char,int>mp2;
        int l=0;
        for(int r=0;r<s.size();r++)
        {
            if(mp1.find(s[r])!=mp1.end()){
            mp2[s[r]]++;
            if(mp1[s[r]]==mp2[s[r]])
            req++;
           }
         while(req==needed)
         {
           // cout<<l<<" "<<r<<endl;
            if(r-l+1<minn)
            {
                
                minn=r-l+1;
                start=l;
                

            }
            if(mp2.find(s[l])!=mp2.end()){
            mp2[s[l]]--;
            if(mp2[s[l]]<mp1[s[l]])
            req--;
            if(mp2[s[l]]==0)
            mp2.erase(s[l]);
          
            }
            l++;
            
         } 
         
         cout<<endl;

        }
        if(minn==INT_MAX)
        return "";
        return s.substr(start,minn);

    }
};