class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int last=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(last==-1&&nums[i]==1)
            last=i;
           else if(nums[i]==1)
            {
                if((i-last)<=k)
                return false;
            //cout<<last<<i<<endl;
                last=i;
            }
        }
        return true;
    }
};