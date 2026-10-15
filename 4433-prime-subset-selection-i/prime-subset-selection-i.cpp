class Solution {
public:
bool isPrime(int n)
{
    for(int i = 2; i <=sqrt(n); ++i){
    if(n % i == 0)
    return false;
    }

    return true;
}
    vector<int> maxPrimes(int n, int s) {
       long long int sum = 0;
        vector<int>res;
        for(int i = 2; i <= n; ++i)
        {
            if(sum + i > s)
            break;
           else if(isPrime(i))
            {
                sum += i;
                res.push_back(i);
            }
        }
        return res;
    }
};