class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long int s=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                s+=grid[i][j];
            }
        }
       long long  int su=s;
        long long int temp=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                temp+=grid[i][j];
            }
            if(su-temp==temp)
            return true;
        }
        temp=0;
       for(int i=0;i<grid[0].size();i++)
       {
        for(int j=0;j<grid.size();j++)
        {
             temp+=grid[j][i];
        }
         if(su-temp==temp)
            return true;
       }
       return false;
    }
};