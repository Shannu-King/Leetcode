class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>openBrackets;
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == '(')
            openBrackets.push(i);
            else if(s[i] == ')')
            {
                reverse(s.begin() + openBrackets.top() , s.begin() + i);
                openBrackets.pop();
            }
            

        }
        string res = "";
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] >='a' && s[i] <= 'z')
            res += s[i]; 
        }
        return res;
    }
};