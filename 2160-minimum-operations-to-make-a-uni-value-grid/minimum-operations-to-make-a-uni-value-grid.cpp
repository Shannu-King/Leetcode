class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>a;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                a.push_back(grid[i][j]);
            }
        }
        sort(a.begin(),a.end());
        int c=0;
        int n=a.size();
        int ans=a[n/2];
       for(int i=0;i<n;i++)
       {
        int k=abs(ans-a[i]);
        if(k%x==0)
        {
            c+=(k/x);
        }
        else
        return -1;
       }
       return c;
    }
};