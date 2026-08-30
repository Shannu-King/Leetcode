class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
      bool freq[101]={0};
      for(int i=0;i<nums.size();i++)
      {
        freq[nums[i]]=1;
      }
      for(int i=0;i<nums.size();i++)
      {
        if(!freq[nums[i]])
        {
            continue;
        }
        bool flag=true;
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[j]!=nums[i])
            {
                flag=false;
            }
            if(!flag&&nums[i]==nums[j])
            {
                freq[nums[i]]=0;
                break;
              //  cout<<<<endl;
            }
        }
      }
      int c=0;
      for(int i=0;i<101;i++)
      {
        if(freq[i]){
        c++;
        cout<<i<<endl;}
      }
      return c;

    }
};