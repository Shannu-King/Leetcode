class Solution {
public:
    int numSteps(string s) {
        int c=0;
        int k=0;
        for(int i=s.size()-1;i>0;i--)
        {
            if(s[i]-'0'+c==1)
            {
                k+=2;
                c=1;
            }
            else
            k++;
        }
        return k+c;

       return 0;
    }
};