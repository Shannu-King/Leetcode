class Solution {
public:
bool ispalindrome(string s)
{
    
    string t=s;
    reverse(t.begin(),t.end());
    return t==s;
}
    int countSubstrings(string s) {
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                if(ispalindrome(s.substr(i,j-i+1)))
                c++;
            }
        }
        return c;
    }
};