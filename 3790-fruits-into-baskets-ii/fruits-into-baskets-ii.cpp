class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int c=0;
        int n=baskets.size();
       vector<int>visited(n,0);
        for(int i=0;i<fruits.size();i++)
        {
            bool flag=false;
            for(int j=0;j<baskets.size();j++)
            {
                if((fruits[i]<=baskets[j])&&!visited[j])
                {
                    visited[j]=1;
                 
                    flag=true;
                       break;
                }
            }
            if(!flag)
            c++;
        }
        return c;
    }
};