class Solution {
public:
    int binaryGap(int n) {
        vector<int>res;
        while(n>0)
        {
            res.push_back(n%2);
            n/=2;
        }
        reverse(res.begin(),res.end());
        int prev=-1;
        int ans=0;
        for(int i=0;i<res.size();i++)
        {
            if(res[i]==1)
            {
                if(prev==-1)
                prev=i;
                else{
                    
                ans=max(i-prev,ans);
                prev=i;
                }
            }

        }
        return ans;
    }
};