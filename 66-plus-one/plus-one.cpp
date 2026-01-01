class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int c=1;
        for(int i=d.size()-1;i>=0;i--)
        {
            if(d[i]!=9)
            {
                d[i]+=c;
                return d;
            }
            else
            {
                d[i]=0;
                c=1;
            }
        }
       
        for(int i=0;i<d.size();i++)
        d[i]=0;
         d.insert(d.begin(),1);
         return d;
    }
};