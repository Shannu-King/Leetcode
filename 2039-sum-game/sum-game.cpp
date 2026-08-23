class Solution {
public:
    bool sumGame(string nums) {
        int n=nums.size();
        int l=0,r=0;
        int lq=0,rq=0;
        for(int i=0;i<n/2;i++)
        {
            if(nums[i]=='?')lq++;
            else l+=nums[i]-'0';
        }
        for(int i=n/2;i<n;i++)
        {
            if(nums[i]=='?')rq++;
            else r+=nums[i]-'0';
        }
        return (l-r)*2!=(rq-lq)*9;

    }
};