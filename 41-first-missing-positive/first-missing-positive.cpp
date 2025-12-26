class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++)
        {
          if(nums[i]>nums.size()||nums[i]<=0)
          continue;
          else if(nums[i]!=i+1)
          {
            if(nums[nums[i]-1]!=nums[i]){
            
            swap(nums[nums[i]-1],nums[i]);
            i--;}

          }
        

        }
        for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i]<<endl;
            if(nums[i]!=i+1)
            return i+1;
        }
        return nums.size()+1;
    }
};