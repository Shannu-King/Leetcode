class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>mp;
        int l=0;
        int maxx=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            while(mp[s[i]]>2)
            {
                mp[s[l]]--;
                l++;
            }
            maxx=max(maxx,i-l+1);
        }
        return maxx;
    }
};