class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        bool flag = false;
        int count = 0;
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i]== '(' && flag == false)
            {
                flag = true;
            }
            else if(s[i] == ')' && count > 0)
            {
                res += s[i];
                count --;
            }
            else if(s[i] == '(' )
            {
                count ++;
                res += s[i];
            }
            else if(count == 0 && s[i] == ')')
            {
                flag = false;
            }
            
        }
        return res;
    }
};