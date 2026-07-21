class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxx=0;
        int high=0;
        int start=nums[0];
        for(int i=0;i<nums.size();i++)
        {
           if(start==nums[i])
           {
            maxx++;
           
           }
           else if(start!=nums[i])
           {
            maxx--;
            
           }
           if(maxx<=0){
           start=nums[i];
           maxx=1;}
        }
        return start;
    }
};