class Solution {
public:
    int maxDifference(string s) {
        int freq[26]={0};
        for(int i=0;i<s.size();i++)
            {
                freq[s[i]-'a']++;
            }
        int maxodd=0;
        int mineven=INT_MAX;
        for(int i=0;i<26;i++)
            {
                if(freq[i]>0)
                {
                if(freq[i]%2==0)
                {
                    mineven=min(mineven,freq[i]);
                }
                    else
                    maxodd=max(maxodd,freq[i]);
            }
            }
        return maxodd>0  && mineven < INT_MAX ? maxodd - mineven : 0;
    }
};