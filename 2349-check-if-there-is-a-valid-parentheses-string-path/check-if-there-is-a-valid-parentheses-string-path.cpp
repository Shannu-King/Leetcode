class Solution {
public:
    bool hasValidPath(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j  < m; ++j)
            {
                if(grid[i][j] == '(')
                grid[i][j] = 1;
                else
                grid[i][j] = -1;
            }
        }
        if((n * m ) % 2 != 0)
        return false;
        if(grid[0][0] == -1)
        return false;

      vector<vector<set<int>>> dp(n+1, vector<set<int>>(m+1));
      dp[1][1].insert(grid[0][0]);
      for(int i = 0; i < n; ++i)
      {
        for(int j = 0; j < m; ++j)
        {
            for(int balance : dp[i][j+1])
            {
                int newBalance = balance + grid[i][j];
                if(newBalance >=0)
                dp[i+1][j+1].insert(newBalance);
            }
            for(int balance : dp[i+1][j])
            {
                int newBalance = balance + grid[i][j];
                if(newBalance >=0)
                dp[i + 1][j+1].insert(newBalance);
            }
        }
      }
      if(dp[n][m].count(0))
      return true;
      return false;

    }
};