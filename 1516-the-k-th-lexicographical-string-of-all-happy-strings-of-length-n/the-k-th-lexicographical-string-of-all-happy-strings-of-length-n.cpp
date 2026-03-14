class Solution {
public:
void generate(vector<char>&l,string curr,vector<string>&res,int n)
{
    if(curr.size()==n)
    {
        res.push_back(curr);
        return;
    }
    for(char c:l)
    {
        if(curr.empty()||curr.back()!=c)
        {
            generate(l,curr+c,res,n);
        }
    }
}
    string getHappyString(int n, int k) {
        vector<string>res;
        vector<char>l={'a','b','c'};
        string curr="";
        generate(l,curr,res,n);
        sort(res.begin(),res.end());
        if(res.size()<k)
        return "";
        return res[k-1];
    }
};