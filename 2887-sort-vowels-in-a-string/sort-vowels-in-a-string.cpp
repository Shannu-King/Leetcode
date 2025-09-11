class Solution {
public:
bool isvowel(char a)
{
    char b=tolower(a);
    return b=='a'||b=='e'||b=='i'||b=='o'||b=='u';
}
    string sortVowels(string s) {
        vector<char>res;
        for(int i=0;i<s.size();i++)
        {
            if(isvowel(s[i]))
            res.push_back(s[i]);
        }
        sort(res.begin(),res.end());
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            if(isvowel(s[i]))
            {
                s[i]=res[k++];
            }
        }
        return s;
    }
};