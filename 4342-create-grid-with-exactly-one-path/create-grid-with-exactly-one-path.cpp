class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>grid(m,string(n,'#'));
        grid[0][0] ='.';
        grid[m - 1][n - 1] = '.';
        if(m == 1 || n == 1)
        {
             vector<string>grids(m,string(n,'.'));
             return grids;
        }
        for(int i = 0; i < m; ++i)
        {
            grid[i][1] = '.';
        } 
        for(int i = 1; i < n; ++i)
        {
            grid[m - 1][i] = '.';
        }
        return grid;
    }
};