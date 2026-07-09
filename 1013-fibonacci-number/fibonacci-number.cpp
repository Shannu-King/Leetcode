class Solution {
public:
int fun(int n)
{
    if(n<=1)
    return n;
    return fun(n-1)+fun(n-2);
}
    int fib(int n) {
        return fun(n);
    }
};