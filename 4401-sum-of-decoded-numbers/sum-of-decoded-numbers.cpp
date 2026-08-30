class Solution {
public:
int fun(int w, long long int num) {
    
    string s = to_string(num);
     if (w <= 0 || w > s.size())
        return 0;
    return stoi(s.substr(0, w));
}
int power(int x, int y) {
    const int mod = 1000000007;
    int ans = 1;

    x %= mod;

    while (y > 0) {
        if (y & 1)
            ans = (long long)ans * x % mod;

        x = (long long)x * x % mod;
        y /= 2;
    }

    return ans;
}
int funs(int w, long long int num) {
    
    string s = to_string(num);
     if (w <= 0 || w > s.size())
        return 0;
    return stoi(s.substr(w));
}

    int sumDecoded(vector<long long>& nums) {

        int n=nums.size();
        const int mod=1e9+7;
        int s=0;
        for(int i=0;i<n;i++)
        {
           // nums[i]=nums[i]%mod;
            int w=nums[i]%10;
            long long int d=floor(nums[i]/10);
            int x=fun(w,d);
            int y=funs(w,d);
            int ans=power(x,y);
            s=(s+ans)%mod;
        }
        return s;



    }
};