class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int freq[256]={0};
        int k=0;
        int m=0;
        int c=0;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            k=i;
             fill(freq,freq+256,0);
            while(k<s.size())
            {
                if(freq[s[k]]>0){
                break;}
                freq[s[k]]++;
                k++;
                ans=max(ans,k-i);
            }
        }
        return ans;
    }
};