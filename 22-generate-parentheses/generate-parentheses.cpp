class Solution {
public:
void fun(string s,int n,int oc,int cc,int idx,vector<string>&res)
{
    if(idx==2*n)
    {
       res.push_back(s);
        return;
    }
    if(oc<n)
    {
        s[idx]='(';
       // cout<<s[idx]<<endl;
        fun(s,n,oc+1,cc,idx+1,res);
    }
    if(oc>cc)
    {
        s[idx]=')';
        fun(s,n,oc,cc+1,idx+1,res);
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string>res;
       string s(2* n,' ');
        fun(s,n,0,0,0,res);
        return res;
    }
};