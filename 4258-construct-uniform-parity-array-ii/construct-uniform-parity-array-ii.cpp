class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
       
        sort(nums1.begin(),nums1.end());
        if(nums1[0]%2!=0)
        return true;
        for(int i=0;i<nums1.size();i++)
        {
            if(nums1[i]%2==0)
            continue;
            else
            return false;

        }
        return true;
    }
};