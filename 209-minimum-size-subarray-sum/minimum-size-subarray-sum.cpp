class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int arraySize = nums.size();
        int left = 0;
        int right = 0;
        int minimum = INT_MAX;
        int currSum = 0;
        for( int left = 0; left < arraySize; left++)
        {
            currSum += nums[left];
            while(right < arraySize && currSum >= target)
            {
                minimum = min (minimum,left - right + 1);
                currSum -= nums[right];
                right++;
            }
        }
        return minimum != INT_MAX ? minimum : 0;
    }
};