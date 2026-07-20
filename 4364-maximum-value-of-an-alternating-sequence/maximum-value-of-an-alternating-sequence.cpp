class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        long long int half=(n/2);
        if(half==0)
        return s;
        return (long long)(s+(long long)(m*half)-((long long)(half-1)));
    }
};