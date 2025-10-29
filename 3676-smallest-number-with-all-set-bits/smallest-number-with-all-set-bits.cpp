class Solution {
public:
    int smallestNumber(int n) {
        for(int i=n+1;i<=n+1000;i++)
        {
            if((i&(i-1))==0)
            return i-1;
        }
        return n;
    }
};