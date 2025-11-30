class Solution {
public:
    int minSubarray(vector<int>& nums,int p) {
        int n=nums.size(),a=0,b=0,c=n;
        unordered_map<int,int> d;
        d[0]=-1;

        for(int x:nums) a=(a+x)%p;
        if(a==0) return 0;

        for(int i=0;i<n;++i) {
            b=(b+nums[i])%p;
            int target=(b-a+p)%p;
            if(d.find(target)!=d.end()) {
                c=min(c,i-d[target]);
            }
            d[b]=i;
        }
        return (c==n)?-1:c;
    }
};
