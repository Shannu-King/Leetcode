class Solution {
public:
    int minimumOperations(string nums) {
        bool five=false,zero=false;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(zero&&nums[i]=='0')return nums.size()-i-2;
            if(zero&&nums[i]=='5') return nums.size()-i-2;
               if(five&&nums[i]=='2') return nums.size()-i-2;   
               if(five&&nums[i]=='7') return nums.size()-i-2;
               if(nums[i]=='5')
               five=true;
               else if(nums[i]=='0')
               zero=true;

        }
        if(zero)
        return nums.size()-1;
        return nums.size();
    }
};