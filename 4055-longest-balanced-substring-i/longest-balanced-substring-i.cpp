class Solution {
public:
    int longestBalanced(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            int freq[26]={0};
            for(int j=i;j<s.size();j++)
            {
                freq[s[j]-'a']++;
                bool flag=true;
                bool found=true;
                int c=0;
                int first=0;
                for(int k=0;k<26;k++)
                {
                    if(freq[k]!=0){
                    if(flag&&freq[k]!=0){
                        first=freq[k];
                        flag=false;
                    }
                    else if(freq[k]!=0&&!flag)
                    {
                        if(freq[k]!=first){
                        found=false;
                         
                      break;}

                    }
                    c++;
                    }
                    
                }
                
                if(found)
                ans=max(ans,c*first);

            }
        }
        return ans;
    }
};