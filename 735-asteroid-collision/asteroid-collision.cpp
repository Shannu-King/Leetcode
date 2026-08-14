class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int>st;
        for(int x:asteroids)
        {
            bool flag=true;
            while(!st.empty()&&x<0&&st.top()>0)
            {
                if(st.top()<-x)
                {
                    st.pop();
                }
                else if(st.top()==-x)
                {
                    st.pop();
                    flag=false;
                    break;
                }
                else {
                flag=false;
                break;}
            }
            if(flag)
            st.push(x);

        }
        vector<int>res;
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};