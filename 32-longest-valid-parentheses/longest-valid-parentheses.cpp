class Solution {
public:
    int longestValidParentheses(string str) {
        int n=str.size();
        stack<int>valid;
       vector<int>visited(n,0);
        int c=0;
        int res=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='(')
            valid.push(i);
            else
            {
                if(!valid.empty())
                {
                    int k=valid.top();
                    visited[k]=1;;
                    visited[i]=1;
                    valid.pop();
                }
            }
        }
        for(int i=0;i<str.size();i++)
        {
            if(visited[i]==1)
            c++;
            else
            c=0;
            res=max(res,c);
        }
        return res;
    }
};