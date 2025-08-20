class Solution {
public:
    int myAtoi(string s) {
        const long long maxx=INT_MAX;
        const long long minn=INT_MIN;
        int index=0;
        int n=s.size();
        while(index<n&&s[index]==' ')
        {
            index++;
        }
        if(index==n)
        return 0;
        int sign=1;
        if(s[index]=='+')
        {
           
            index++;

        }
        else if(s[index]=='-')
        {
            sign=-1;
            index++;
        }
        long long res=0;
        while(index<n&&isdigit(s[index]))
        {
            res=res*10+(s[index]-'0');
            if(res*sign>=maxx)
            return maxx;
            else if(res*sign<=minn)
            return minn;
            index++;
        }
        return sign*res;
    }
};