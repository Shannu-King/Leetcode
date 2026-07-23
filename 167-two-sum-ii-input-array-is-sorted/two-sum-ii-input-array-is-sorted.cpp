class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int left=0;
        int right=arr.size()-1;
        while(left<=right)
        {

            if(arr[left]+arr[right]==target)
            {
                return {left+1,right+1};
            }
            else if(arr[left]+arr[right]>target)
            {
                right--;
            }
            else
            left++;

        }
        return {-1,-1};
    }
};