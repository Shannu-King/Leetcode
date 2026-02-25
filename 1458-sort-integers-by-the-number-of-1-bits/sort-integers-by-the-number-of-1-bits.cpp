class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>p;
        for(int i=0;i<arr.size();i++)
        {
            int k=__builtin_popcount(arr[i]);
            p.push_back({k,arr[i]});
        }
        sort(p.begin(),p.end());
        vector<int>res;
        for(int i=0;i<p.size();i++)
        {
            res.push_back(p[i].second);
        }
        return res;
    }
};