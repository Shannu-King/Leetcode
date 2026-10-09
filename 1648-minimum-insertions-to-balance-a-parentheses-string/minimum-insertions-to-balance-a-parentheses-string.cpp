class Solution {
public:
    int minInsertions(string s) {
        int size = s.size();


        int leftCount = 0;
        int insertions = 0;
        for(int i = 0; i < size; ++i)
        {
            if(s[i] == '(')
            {
                leftCount ++;
            }
            else
            {
                if(leftCount > 0)
                {
                    leftCount --;
                }
                else
                {
                    insertions++;
                }
                if(i < s.size() - 1 && s[i + 1] == ')')
                {
                    ++i;
                }
                else
                {
                    insertions ++;
                }
            }
        }
        insertions += 2 * leftCount;
        return insertions ;
    }
};