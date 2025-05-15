class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int c=0;
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
        }
        int temp=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            temp+=nums[i];
            s-=nums[i];
            if(abs(temp-s)%2==0)
            c++;
        }
        return c;
    }
};