class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& a) {
        sort(a.begin(),a.end());
        long long sum=mass;
        for(int i=0;i<a.size();i++)
        {
            if(sum>=a[i])
            sum+=a[i];
            else
            return false;
        }
        return true;
    }
};