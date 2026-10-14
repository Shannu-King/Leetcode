class Solution {
public:
    bool checkValidString(string s) {
        
        stack<int>open;
        stack<int>stars;

        int size = s.size();
        for(int i = 0; i < size; ++i)
        {
            if(s[i] == '(')
            open.push(i);
            else if(s[i] == '*')
            stars.push(i);
            else
            {
                if(!open.empty())
                open.pop();
                else if(!stars.empty())
                stars.pop();
                else
                return false;
            }

        }
        while(!open.empty() && !stars.empty())
        {
            if(open.top() < stars.top())
            {
                open.pop();
                stars.pop();
            }
            else
            return false;
        }
        return open.empty();
    }
};