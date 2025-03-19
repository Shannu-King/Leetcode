class Solution {
public:
    int minOperations(vector<int>& a) {
        int n=a.size();
        int c=0;
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
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            return -1;
        }
        return c;
    }
};