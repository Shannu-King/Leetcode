class Solution {
public:
    long long coloredCells(int n) {
        int c=1;
        long long s=0;
       for(int i=1;i<n;i++)
       {
        s+=2*c;
        c+=2;
       }
       s+=(2*n)-1;
       return s;
    }
};