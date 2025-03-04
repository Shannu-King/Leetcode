class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n)
        {
            int k=n%3;
            // cout<<k<<" ";
            if(k==2)
            return 0;
            n=n/3;
        }
        return 1;
    }
};