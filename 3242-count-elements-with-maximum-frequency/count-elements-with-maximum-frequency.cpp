class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxx=0;
        int freq[101]={0};
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
            if(freq[nums[i]]>maxx)
            maxx=freq[nums[i]];

        }
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(freq[nums[i]]==maxx)
            {
                freq[nums[i]]--;
                c++;
            }

        }
        return c*maxx;
    }
};