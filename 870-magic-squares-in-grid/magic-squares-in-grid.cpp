class Solution {
public:
bool magic(int k,int l,vector<vector<int>>& grid)
{
     vector<int> count(10, 0);

    for(int i=k;i<k+3;i++){
        for(int j=l;j<l+3;j++)
        {
            int num=grid[i][j];
           if(num<1 || num>9 ||count[num]>0)
           return false;
            count[num]++;

        }
       
            }
            int sum=grid[k][l]+grid[k][l+1]+grid[k][l+2];
        
       // sum=grid[k][l]+grid[k][l+1]+grid[k][l+2];
        for(int i=0;i<3;i++)
        {
            if ((grid[k + i][l] + grid[k + i][l + 1] + grid[k + i][l + 2] != sum) ||
            (grid[k][l + i] + grid[k + 1][l+ i] + grid[k + 2][l + i] != sum)) {
            return false;
        }
        }
        
        int a=grid[k][l]+grid[k+1][l+1]+grid[k+2][l+2];
        if(a!=sum)
        return false;
        int b=grid[k][l+2]+grid[k+1][l+1]+grid[k+2][l];
        if(b!=sum)
        return false;
        return true;

}

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        for(int i=0;i<m-2;i++)
        {
            for(int j=0;j<n-2;j++)
            {
                if(magic(i,j,grid))
               
                count++;

            }
            //cout<<endl;
        }
return count;
    }
};