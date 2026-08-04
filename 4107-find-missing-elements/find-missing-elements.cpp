class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int freq[101]={0};
        bool flag=false;
        vector<int>res;
        int maxx=0;
        for(int i=0;i<nums.size();i++){
            maxx=max(maxx,nums[i]);
        freq[nums[i]]++;}
        for(int i=0;i<=maxx;i++)
        {
            if(freq[i]!=0)
            {
                flag=true;
            }
            if(flag&&freq[i]==0)
            res.push_back(i);
        }
        return res;
    }
};