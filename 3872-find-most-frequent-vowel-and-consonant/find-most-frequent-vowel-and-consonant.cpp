class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26]={0};
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-'a']++;
        }
        int ans1=max({freq[0],freq[4],freq[8],freq[14],freq[20]});
        int maxx=0;
        for(int i=0;i<26;i++)
        {
            if(i==0||i==4||i==8||i==14||i==20)
            continue;
            else
            maxx=max(freq[i],maxx);
        }
        return maxx+ans1;
    }
};