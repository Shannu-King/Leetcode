class Solution {
public:
    int reverseBits(int n) {
        int temp=n;
        vector<int>res;
        int ans=0;
        while(temp>0)
        {
            res.push_back(temp%2);
            temp/=2;
        }
        while(res.size()<32)
        res.push_back(0);
        int k=res.size();
        for(int i=0;i<res.size();i++)
        {
           // cout<<res[i]<<" ";

            ans+=(res[k-1-i])*pow(2,i);
        }
        return ans;
    }
};