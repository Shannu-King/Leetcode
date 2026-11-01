class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        vector<string>res;
        int minn = INT_MAX;
        for(int i = 0; i < nums.size(); i = i + 2)
        {
            string k = to_string(nums[i]) + to_string(nums[i + 1]);
            minn = min(minn,static_cast<int>(k.size()));
           
        }
         for(int i = 0; i < nums.size(); i = i + 2)
        {
            string k = to_string(nums[i]) + to_string(nums[i + 1]);
            if(static_cast<int>(k.size()) == minn)
              res.push_back(k);
           
        }
       
        sort(res.begin(),res.end());
        return stoi(res[0]);
    }
};