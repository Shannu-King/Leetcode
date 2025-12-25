class Solution {
public:
    long long maximumHappinessSum(vector<int>& a, int k) {
        int n=a.size();
        sort(a.begin(),a.end(),greater<int>());
       long long  int sum=0;
        for(int i=0;i<k;i++)
        {
            if(a[i]>=i)
            sum=sum+(a[i]-i);
        }
        return sum;
    }
};