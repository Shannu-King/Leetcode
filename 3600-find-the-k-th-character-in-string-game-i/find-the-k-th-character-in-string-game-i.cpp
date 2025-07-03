class Solution {
public:
    char kthCharacter(int k) {
        string res="";
        res.append("a");
        for(int i=1;i<k;i++)
        {
            string s="";
            for(int j=0;j<res.size();j++)
            {
                if(res[j]=='z')
                s.append("a");
                else
                {
                   s+=char(res[j]+1);
                }
            }
            res+=s;
            if(res.size()>k)
            break;
            
        }
        return res[k-1];
    }
};