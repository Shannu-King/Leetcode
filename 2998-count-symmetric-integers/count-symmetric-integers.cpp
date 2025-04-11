class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++)
        {
            string s=to_string(i);
            int n=s.size();
            int c=0;
            int d=0;
            if(s.size()%2!=0)
            continue;
            for(int j=0;j<n/2;j++)
            {
                c+=(s[j]-'0');
               d+=(s[n-1-j]-'0');
            }
            if(c==d)
            count++;

        }
        return count;
    }
};