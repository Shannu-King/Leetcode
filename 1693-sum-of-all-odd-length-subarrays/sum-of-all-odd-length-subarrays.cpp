class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        int n=arr.size();
        for(int i=0;i<arr.size();i++)
        {
            sum+=(ceil((n-i)*(i+1)/2.0))*(arr[i]);
           // cout<<sum<<endl;
        }
        return sum;
    }
};