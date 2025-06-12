class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
     priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>>pq;
        for(int i=0;i<points.size();i++)
        {
            int a=(points[i][0]*points[i][0]);
            int b=(points[i][1]*points[i][1]);
           pq.push({(a+b),i});
            
        }
        vector<int>index;
        map<int,int>mp;
        while(!pq.empty()&&k--)
        {
           mp[pq.top().second]++;
            pq.pop();
        }
        vector<vector<int>>ans;
        for(int i=0;i<points.size();i++)
        {
            if(mp[i])
            {
                ans.push_back({points[i][0],points[i][1]});
            }
        }
        return ans;

    }
};