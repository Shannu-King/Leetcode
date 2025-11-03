class Solution {
public:
    int minCost(string c, vector<int>&t) {
        int s=0;
        for(int i=0;i<c.size()-1;i++)
        {
            if(c[i]==c[i+1])
            {
                s+=min(t[i],t[i+1]);
                t[i+1]=max(t[i],t[i+1]);
            }
        }
        return s;
        
    }
};