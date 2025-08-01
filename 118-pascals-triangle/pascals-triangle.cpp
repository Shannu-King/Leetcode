class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>res;
        res.push_back({1});
        for(int i=1;i<n;i++)
        {
            vector<int>rows;
            rows.push_back(1);
            for(int j=0;j<res[i-1].size()-1;j++)
            {
                rows.push_back(res[i-1][j]+res[i-1][j+1]);
            }
              rows.push_back(1);
              res.push_back(rows);
            
            
        }
        return res;
    }
};