class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& in) {
        int c=1;
        
sort(in.begin(), in.end(), [](auto &a, auto &b) {
    if (a[0] == b[0])
        return a[1] > b[1];  
    return a[0] < b[0];
});
        for(int i=1;i<in.size();i++)
        {
            if(in[i-1][1]<in[i][1])
            c++;
            else
            in[i][1]=max(in[i][1],in[i-1][1]);
        }
        return c;
       
    }
};