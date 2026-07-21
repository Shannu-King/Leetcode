class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        for(int i=0;i<strs[0].size();i++)
        {
            int j=0;
            char s=strs[0][i];
            for( j=0;j<strs.size();j++)
            {
                if(strs[j][i]==s)
                continue;
                else 
                break;
            }
            if(j==strs.size())
            res+=s;
            else
            break;
        }
        return res;
    }
};