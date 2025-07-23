class Solution {
public:
    int maximumGain(string s, int x, int y) 
    {
        int n=s.size();
        if(x>y)
        {
            vector<char> st;
            int ans=0;
            st.push_back(s[0]);
            for(int i=1;i<n;i++)
            {
                if(!st.empty()&&st.back()=='a'&&s[i]=='b')
                {
                st.pop_back();
                ans+=x;
                }
                else 
                st.push_back(s[i]);   
            }
            int s=st.size();
            vector<char> t;
            t.push_back(st[0]);
            for(int i=1;i<s;i++)
            {
                if(!t.empty()&&t.back()=='b'&&st[i]=='a')
                {
                t.pop_back();
                ans+=y;
                }
                else 
                t.push_back(st[i]);
            }
            return ans;
        }
        else
        {
            vector<char> st;
            int ans=0;
            st.push_back(s[0]);
            for(int i=1;i<n;i++)
            {
                if(!st.empty()&&st.back()=='b'&&s[i]=='a')
                {
                st.pop_back();
                ans+=y;
                }
                else 
                st.push_back(s[i]);   
            }
            int s=st.size();
            vector<char> t;
            t.push_back(st[0]);
            for(int i=1;i<s;i++)
            {
                if(!t.empty()&&t.back()=='a'&&st[i]=='b')
                {
                t.pop_back();
                ans+=x;
                }
                else 
                t.push_back(st[i]);
            }
            return ans;
        }
        return 0;
    }
};