class Solution {
public:
    long long gcdSum(vector<int>& nums) {
      vector<int>pre(nums.size());
      int maxx=0;
      for(int i=0;i<nums.size();i++)
      {
        maxx=max(nums[i],maxx);
        pre[i]=gcd(maxx,nums[i]);
      }  
      sort(pre.begin(),pre.end());
      long long s=0;
      for(int i=0;i<pre.size()/2;i++)
      {
        s+=gcd(pre[i],pre[nums.size()-1-i]);
      }
      return s;
    }
};