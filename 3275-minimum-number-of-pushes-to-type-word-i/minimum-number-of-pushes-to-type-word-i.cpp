class Solution {
public:
    int minimumPushes(string word) {
        int freq[26]={0};
        for(int i=0;i<word.size();i++)
        {
            freq[word[i]-'a']++;
        }
        sort(freq,freq+26);
        int c=0;
        int ans=0;
        for(int i=25;i>=0;i--)
        {
            if(freq[i]!=0)
            {
               
                ans+=(c/8)+1;
                 c++;
            }
        }
        return ans;
    }
};