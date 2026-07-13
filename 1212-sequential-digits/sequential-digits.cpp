class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        for(int i=1;i<=9;i++)
        {
            long long s=i;
            for(int j=i+1;j<=9;j++)
            {
                s=s*10+j;
              if(s>=low&&s<=high)
              ans.push_back((int)s);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};