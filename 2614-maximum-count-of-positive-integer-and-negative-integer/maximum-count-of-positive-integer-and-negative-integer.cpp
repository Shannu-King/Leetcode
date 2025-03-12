class Solution {
public:
    int maximumCount(vector<int>& arr) {
        auto it=upper_bound(arr.begin(),arr.end(),-1);
        int a=it-arr.begin();
         auto ita=lower_bound(arr.begin(),arr.end(),1);
         int b=arr.end()-ita;
        return max(a,b);
    }
};