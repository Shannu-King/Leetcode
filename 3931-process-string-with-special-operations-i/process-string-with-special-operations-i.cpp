class Solution {
public:
void add(stack<char>&st)
{
    stack<char>ss=st;
    string s="";

    while(!st.empty())
    {
       s+=st.top();
        st.pop();

    }
     reverse(s.begin(),s.end());
      for(int i=0;i<s.size();i++)
      ss.push(s[i]);
    st=ss;
}
void reversee(stack<char>&st)
{
    stack<char>s;
    while(!st.empty())
    {
        s.push(st.top());
        st.pop();

    }
    st=s;
}
    string processStr(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            st.push(s[i]);
            else if(s[i]=='#')
            {
                add(st);
            }
            else if(s[i]=='*'&&!st.empty())
            st.pop();
            else
            reversee(st);
        }
        s="";
        while(!st.empty())
        {
            s+=st.top();
            st.pop();
        }
        if(s=="")
        return "";
        reverse(s.begin(),s.end());
        return s;
    }
};