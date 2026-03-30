class Solution {
public:
    bool checkStrings(string s1, string s2) {
        map<char,int>mp1;
        map<char,int>mp2;
        for(int i=0;i<s1.size();i+=2)
        {
            mp1[s1[i]]++;
            mp2[s2[i]]++;
        }
         
        if(mp1!=mp2)
        return false;
        mp1.clear();
        mp2.clear();
         for(int i=1;i<s2.size();i+=2)
        {
            mp1[s1[i]]++;
            mp2[s2[i]]++;
        }
         
        if(mp1!=mp2)
        return false;
        mp1.clear();
        mp2.clear();
        return true;



    }
};