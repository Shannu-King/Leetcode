class Solution {
public:
    bool hasAlternatingBits(int n) {
        int c=n%2;
        n=n/2;
        while(n>0)
        {
            int k=n%2;
            if(k==c)
            return false;
            else
            {
               
                c=k;
            }
            n=n/2;
        }
        return true;
    }
};