class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int minn=cost[0];
        vector<int>res;
        for(int i=0;i<cost.size();i++)
        {
            minn=min(minn,cost[i]);
            res.push_back(minn);
        }
        return res;
    }
};