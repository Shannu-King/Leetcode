class Solution {
public:
bool isanagram(string a,string b)
{
    map<char,int>mp1;
    map<char,int>mp2;
    for(int i=0;i<a.size();i++)
    {
        mp1[a[i]]++;
    }
    for(int i=0;i<b.size();i++)
    mp2[b[i]]++;
    return mp1==mp2;
}
    vector<string> removeAnagrams(vector<string>& words) {
        for(int i=words.size()-1;i>0;i--)
        {
            if(isanagram(words[i],words[i-1]))
            {
               words.erase(words.begin()+i);
            }
        }
        return words;
    }
};