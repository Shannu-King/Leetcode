class Solution {
public:
    vector<int> getRow(int n) {
        vector<vector<int>>res;
        if(n==0)
        return {1};
        res.push_back({1});
        for(int i=1;i<=n;i++)
        {
            vector<int>row;
            row.push_back(1);
          for(int j=0;j<res[i-1].size()-1;j++)
          {
            row.push_back(res[i-1][j]+res[i-1][j+1]);
          }
          row.push_back(1);
                res.push_back(row);
                if(i==n)
                return row;
        }
        return {};
    }
};