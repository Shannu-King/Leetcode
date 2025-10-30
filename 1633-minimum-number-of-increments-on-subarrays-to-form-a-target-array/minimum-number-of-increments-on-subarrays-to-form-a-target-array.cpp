class Solution {
public:
    int minNumberOperations(vector<int>& t) {
        int ans=0;
        int n=t.size();
        for(int i=1;i<n;i++){
            if(t[i-1]>t[i])
                ans+=(t[i-1]-t[i]);
        }
        return ans+t[n-1];
    }
};