class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        int z=0;
        int o=0;
        int t=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<a){
            nums[i]=0;
            z++;}
            else if(nums[i]>b){
            nums[i]=2;
            t++;}
            else{
            nums[i]=1;
            o++;}
        }
        const int mod=1e9+7;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            z--;
            else if(nums[i]==1)
            {
                if(z>0)
                c+=z;
                o--;
            }
            else if(nums[i]==2)
            c+=z+o;
            c=c%mod;

        }
        return c%mod;
        
    }
};