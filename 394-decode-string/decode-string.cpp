class Solution {
public:
void fun(stack<int>&stn,stack<string>&st,string &res)
{
    int n=stn.top();
    stn.pop();

    string temp="";

    for(int i=0;i<n;i++)
        temp+=res;

    res="";

    if(!st.empty())
    {
        res=st.top();
        st.pop();
    }

    res+=temp;
}
    string decodeString(string s) {
        stack<int>stn;
        stack<string>st;
        string res="";
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
           
          if(s[i]=='[')
{
    stn.push(ans);
    ans=0;

    st.push(res);
    res="";
}
if(s[i]==']')
    {
        fun(stn,st,res);
    }
            if(s[i]>='a'&&s[i]<='z'){
            res+=s[i];
            ans=0;}
            if(s[i]>='0'&&s[i]<='9'){
          ans=ans*10+(s[i]-'0');
           
           }
        }
        if(st.empty())
        return res;
        return st.top()+res;
    }
};