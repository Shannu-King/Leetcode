class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& c) {
        int s=0;
        int k=0;
        for(int i=0;i<apple.size();i++)
        {
            s+=apple[i];
        }
            sort(c.begin(),c.end());
            for(int i=c.size()-1;i>=0;i--)
            {
                k+=c[i];
                if(k>=s)
                return c.size()-i;
            }
            return c.size();
        
    }
};