class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int c=0;
        for(int i=0;i<cost.size();i+=2)
        {
            c+=cost[i];
            if(i+1<cost.size())
            c+=cost[i+1];
            i++;
        }
        return c;
    }
};