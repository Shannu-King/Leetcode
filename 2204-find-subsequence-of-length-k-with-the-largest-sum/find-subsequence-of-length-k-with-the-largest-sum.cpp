class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
       vector<int>ans;
       priority_queue<pair<int,int>>pq;
       vector<pair<int,int>>p;
       for(int i=0;i<nums.size();i++)
       pq.push({nums[i],i});
       while(k--)
       {
        p.push_back({pq.top().first,pq.top().second});
        pq.pop();
       }
         sort(p.begin(), p.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;  
    });
    for(int i=0;i<p.size();i++)
    ans.push_back(p[i].first);
    return ans;

    }
};