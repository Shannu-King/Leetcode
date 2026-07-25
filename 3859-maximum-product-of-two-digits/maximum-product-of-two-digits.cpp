class Solution {
public:
    int maxProduct(int n) {
        int first=0;
        int second=0;
        while(n>0)
        {
            if(n%10>first)
            {
                 second=first;
                first=n%10;
               
            }
            else if(n%10>second)
            {
                second=n%10;
            }
            n=n/10;

        }
        return first*second;
    }
};