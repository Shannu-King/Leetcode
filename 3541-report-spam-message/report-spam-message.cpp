class Solution {
public:
    bool reportSpam(vector<string>& m, vector<string>& b) {
        map<string,int>mp;
        for(int i=0;i<b.size();i++)
        mp[b[i]]++;
        int c=0;
        for(int i=0;i<m.size();i++)
        {
            if(mp[m[i]])
            c++;
        }
        return c>=2;

    }
};