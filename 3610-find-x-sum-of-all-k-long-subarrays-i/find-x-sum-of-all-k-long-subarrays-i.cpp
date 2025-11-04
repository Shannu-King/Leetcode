class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n-k+1;i++)
        {
            map<int,int>mp;
            for(int j=i;j<i+k;j++)
            {
                mp[nums[j]]++;
            }
            priority_queue<pair<int,int>>pq;
            for(const auto&it:mp)
            {
                pq.push({it.second,it.first});
            }
            int mm=x;
            int s=0;
            while(mm--&&!pq.empty())
            {
                s+=pq.top().first*pq.top().second;
                pq.pop();
            }
            res.push_back(s);

        }
        return res;
    }
};