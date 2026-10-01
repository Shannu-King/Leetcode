class Solution {
public:
    bool isValid(string s) {
        stack<char>paranthesis;
        
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                paranthesis.push(s[i]);

            }
            else 
            {
                if(paranthesis.empty())
                return false;
                if(s[i] == '}' && paranthesis.top() == '{' || (s[i] == ']' && paranthesis.top() == '[') || s[i] == ')' && paranthesis.top() == '(')
                paranthesis.pop();
                else
                return false;
            }
        }
        return paranthesis.empty();

    }
};