class Solution {
public:
void travel(vector<vector<int>>&grid ,int i,int j)
{
    int m=grid.size();
    int n=grid[0].size();
    for(int k=i-1;k>=0;k--)
    {
        if(grid[k][j]==1||grid[k][j]==-1)
        break;
        else
        grid[k][j]=10;
    }
     for(int k=i+1;k<m;k++)
    {
        if(grid[k][j]==1||grid[k][j]==-1)
        break;
        else
        grid[k][j]=10;
    }
    for(int k=j-1;k>=0;k--)
    {
        if(grid[i][k]==1||grid[i][k]==-1)
        break;
        else
        grid[i][k]=10;
    }
    for(int k=j+1;k<n;k++)
    {
        if(grid[i][k]==1||grid[i][k]==-1)
        break;
        else
        grid[i][k]=10;
    }

}
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
       vector<vector<int>> grid(m, vector<int>(n, 0));
        for(int i=0;i<guards.size();i++)
        {
            int k=guards[i][0];
            int l=guards[i][1];
            grid[k][l]=-1;
        }
        for(int i=0;i<walls.size();i++)
        {
            int k=walls[i][0];
            int l=walls[i][1];
            grid[k][l]=1;

        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==-1)
                {
                    travel(grid,i,j);
                }
            }
        }
        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0)
                c++;
            }
        }
        return c;
    }
};