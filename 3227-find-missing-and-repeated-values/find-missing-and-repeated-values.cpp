class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        
       map<int,int>mp;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                mp[grid[i][j]]++;
            }
        }
        int a=0;
        int b=0;
        for(int i=0;i<mp.size();i++)
        {
            if(mp[i]==2)
            a=i;
            if(mp[i]==0)
            b=i;

        }
        if(b==0)
       b=(n*n);
        return {a,b};
    }
};