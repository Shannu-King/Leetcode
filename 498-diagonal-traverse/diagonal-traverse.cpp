class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>res;
        int n=mat.size();
        int m=mat[0].size();
        for(int s=0;s<n+m-1;s++)
        {
            vector<int>temp;
            for(int i=0;i<n;i++)
            {
                int j=s-i;
                if(j>=0&&j<m)
                {
                    temp.push_back(mat[i][j]);
                }
            }
            int k=temp.size();
            if(s%2==0)
            reverse(temp.begin(),temp.end());
            for(int l=0;l<k;l++)
            res.push_back(temp[l]);
        }
        return res;
    }
};