class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int t=(grid.size()*grid[0].size());
        k=k%t;
        vector<int>res;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            res.push_back(grid[i][j]);
        }
        int l=0,m=0;
        for(int i=res.size()-k;i<res.size();i++)
        {
            grid[m][l]=res[i];
            l++;
            if(l==grid[0].size())
            {
                m++;
                l=0;
            }
        }
        for(int i=0;i<res.size()-k;i++)
        {
            grid[m][l]=res[i];
            l++;
            if(l==grid[0].size())
            {
                m++;
                l=0;
            }
        }
        return grid;
    }
};