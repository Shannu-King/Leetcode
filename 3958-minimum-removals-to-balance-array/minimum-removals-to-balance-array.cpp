class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int j=0;
        int maxx=0;
      for(int i=0;i<nums.size();i++)
      {
        while(j<nums.size()&&((nums[j])<=(long long)k*nums[i]))
        {
            j++;
            maxx=max(maxx,j-i);
          
        }
          
      }
      return nums.size()-maxx;
    }
};