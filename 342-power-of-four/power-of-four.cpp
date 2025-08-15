class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if(n<1)
        return 0;
     
        return !(n&(n-1))&&(n-1)%3==0;
    }
};