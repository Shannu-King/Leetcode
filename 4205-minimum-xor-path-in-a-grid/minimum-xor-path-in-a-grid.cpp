class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int n = grid.size();

        int m = grid[0].size();

vector<vector<unordered_set<int>>> dp(
    n, vector<unordered_set<int>>(m)
);

      for(int i = 0; i < n; ++i)
      {
        for(int j = 0; j < m; ++j)
        {
            if(i == 0 && j == 0)
            {
                dp[i][j].insert(grid[i][j]);
                continue;
            }
            if(i > 0){
           for(int k:dp[i - 1][j])
           {
            int l = grid[i][j];
            l = l ^ k;
            dp[i][j].insert(l);
           }
            }
            if(j > 0){
           for(int k:dp[i][j - 1])
           {
               int l = grid[i][j];
            l = l ^ k;
            dp[i][j].insert(l);
           }
            }
        }
      }
      int minn = INT_MAX;
      for(int k:dp[n - 1][m - 1])
    {
        minn = min(minn,k);
    }
    return minn;




    }
};