class Solution {
public:
int isDigitSum(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
    int smallestIndex(vector<int>& nums) {
        int numSize = nums.size();
        
        for(int i = 0; i < numSize; ++i)
        {
            if(isDigitSum(nums[i]) == i)
            return i;
        }
        return -1;
    }
};