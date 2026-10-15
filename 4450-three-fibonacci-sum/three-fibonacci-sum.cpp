class Solution {
public:
    bool threeFibonacciSum(int n) {
       int a = 0 , b = 1;
       long long int c = 0;
        while(c < n)
        {

            c = a + b;
            if(c + a + b == n)
            return true;
            a = b ;
            b = c;
        }
        return false;
    }
};