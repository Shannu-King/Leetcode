class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();
    vector<vector<int>>dp(n,vector<int>(m,0));
    for(int i=0;i<grid.size();i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==1)
            {
                dp[i][j]=0;
                continue;
            }
            else if(i==0&&j==0)
            dp[i][j]=1;
            if(i>=1)
            {
                dp[i][j]+=dp[i-1][j];
            }
             if(j>=1)
            dp[i][j]+=dp[i][j-1];
        }
    }
    return dp[n-1][m-1];
    }
};