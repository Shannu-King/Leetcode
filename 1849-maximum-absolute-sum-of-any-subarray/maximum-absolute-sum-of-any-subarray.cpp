class Solution {
public:
    int maxAbsoluteSum(vector<int>& arr) {
        int maxx=0;
        int minn=0;
        int res=0;
        for(int i=0;i<arr.size();i++)
        {
            maxx=max(0,maxx+arr[i]);
            minn=min(0,minn+arr[i]);
            res=max(res,maxx-minn);
        }
        return res;
    }
};