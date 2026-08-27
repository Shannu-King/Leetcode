class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        int n =s.size();
        int m=t.size();
        for(int i=0;i<m;i++)
        {
            mp[t[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            mp[s[i]]--;
        }
        for(const auto &it:mp)
        {
            if(it.second>=1)
            return it.first;
        }
        return ' ';
    }
};