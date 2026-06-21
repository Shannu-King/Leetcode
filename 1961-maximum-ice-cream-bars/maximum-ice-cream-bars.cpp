class Solution {
public:
    int maxIceCream(vector<int>& c, int co) {
        sort(c.begin(),c.end());
        for(int i=0;i<c.size();i++)
        {
            if(co<c[i])
            return i;
            co-=c[i];
        }
        return c.size();
    }
};