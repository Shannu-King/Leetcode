class Solution {
public:
    int maxDepth(string s) {
        int maxxCount = 0;
        int open = 0;
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == '(')
            open ++;
            else if(s[i] ==')')
            open --;
            maxxCount = max(maxxCount, open);
        }
        return maxxCount;
    }
};