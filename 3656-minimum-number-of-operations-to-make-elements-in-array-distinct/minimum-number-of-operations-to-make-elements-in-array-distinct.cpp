class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int freq[101]={0};
        int c=0;
        while(1){
            fill(freq, freq + 101, 0);
        for(int i=0;i<nums.size();i++)
            {
                freq[nums[i]]++;
                
            }
            bool flag=false;
            for(int i=0;i<101;i++)
                {
                    if(freq[i]>1){
                        flag=true;
                    break;}
                }
            if(!flag)
                break;
            if(flag)
            {
                if(nums.size()>3){
                nums.erase(nums.begin());
                     nums.erase(nums.begin());
                     nums.erase(nums.begin());
                   // cout<<nums[0]<<endl;
                    c++;
                    }
                else
                    return c+1;
                
            }
        }
        return c;
    }
};