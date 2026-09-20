class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int intersections = 0;
        int intervalSize = intervals.size();
        sort(intervals.begin() ,intervals.end());
        for(int i = 0; i < intervalSize; i++)
        {
            for(int j = i + 1; j < intervalSize; ++j)
            {
                if(intervals[i][1] >= intervals[j][0])
                intersections ++;
            }
        }
        return intersections;
    }
};