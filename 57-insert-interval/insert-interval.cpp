class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        vector<vector<int>>res;
        sort(intervals.begin(),intervals.end());
        int first=intervals[0][0];
        int last=intervals[0][1];
        for(int i=0;i<intervals.size();i++)
        {
            int a=intervals[i][0];
            int b=intervals[i][1];
            if(a==last+1||a>last+1)
            {
               
                res.push_back({first,last});
                first=INT_MAX;
            }
          
            first=min(first,a);
            last=max(last,b);
        }
        res.push_back({first,last});
        return res;
    }
};