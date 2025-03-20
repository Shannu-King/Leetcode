class Solution {
public:
    int minOperations(vector<int>& a) {
        int n=a.size();
        int c=0;
        int d=0;
        for(int i=0;i<n-2;i++)
        {
            if(a[i]==0)
            {
                a[i]=1-a[i];
                a[i+1]=1-a[i+1];
                a[i+2]=1-a[i+2];
                c++;
            }
        }
        if(a[n-2]==0||a[n-1]==0)
        return -1;
        return c;
    }
};