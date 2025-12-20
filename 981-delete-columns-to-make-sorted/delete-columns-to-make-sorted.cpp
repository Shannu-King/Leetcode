class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int c=0,j;
        for(int i=0;i<strs[0].size();i++)
        {
            for( j=0;j<strs.size()-1;j++)
            {
                if(strs[j][i]>strs[j+1][i])
                break;
            }
            if(j!=strs.size()-1)
            c++;
        }
        return c;
    }
};