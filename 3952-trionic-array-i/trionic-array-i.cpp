class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int i=0;
        int c=0;
        bool flag=true;
        while(i<nums.size()-1&&nums[i]<nums[i+1]){i++;
        if(flag){
        c++;
        flag=false;}
        }
        flag=true;
        while(i<nums.size()-1&&nums[i]>nums[i+1]){i++;
       
        if(flag){
            c++;
        flag=false;}
        }
        flag=true;
        while(i<nums.size()-1&&nums[i]<nums[i+1]){
           // c++;
           i++;
            if(flag){
        c++;
        flag=false;}}
        return i==nums.size()-1&&c>=3;
    }
};