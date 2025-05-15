class Solution {
public:
    int clumsy(int n) {
        int c=0;
        int ans=0;
        stack<int>st;
        st.push(n);
        for(int i=n-1;i>=1;i--)
        {
            c++;
            if(c%4==1)
            st.top()*=i;
             else if(c%4==2)
            st.top()/=i;
            else if(c%4==3)
            st.push(i);
            else
            st.push(-i);
            

        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};