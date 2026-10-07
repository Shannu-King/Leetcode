class Solution {
public:
    unordered_set<string> ans;

    void dfs(string &s, int index,
             int leftRemove, int rightRemove,
             int balance, string current) {
        if (index == s.size()) {
            if (leftRemove == 0 &&
                rightRemove == 0 &&
                balance == 0) {
                ans.insert(current);
            }
            return;
        }

        char ch = s[index];

        
        if (ch == '(') {

          
            if (leftRemove > 0) {
                dfs(s, index + 1,
                    leftRemove - 1,
                    rightRemove,
                    balance,
                    current);
            }

            
            dfs(s, index + 1,
                leftRemove,
                rightRemove,
                balance + 1,
                current + ch);
        }

       
        else if (ch == ')') {

          
            if (rightRemove > 0) {
                dfs(s, index + 1,
                    leftRemove,
                    rightRemove - 1,
                    balance,
                    current);
            }

           
            if (balance > 0) {
                dfs(s, index + 1,
                    leftRemove,
                    rightRemove,
                    balance - 1,
                    current + ch);
            }
        }

       
        else {
            dfs(s, index + 1,
                leftRemove,
                rightRemove,
                balance,
                current + ch);
        }
    }

    vector<string> removeInvalidParentheses(string s) {

        int leftRemove = 0;
        int rightRemove = 0;

        
        for (char ch : s) {

            if (ch == '(') {
                leftRemove++;
            }
            else if (ch == ')') {

                if (leftRemove > 0)
                    leftRemove--;
                else
                    rightRemove++;
            }
        }

        dfs(s, 0,
            leftRemove,
            rightRemove,
            0,
            "");

        return vector<string>(ans.begin(), ans.end());
    }
};