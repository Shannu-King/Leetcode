class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int i=0;
        string res="";
        while(i<w1.size()&&i<w2.size())
        {
            res+=w1[i];
            res+=w2[i];
            i++;
           
        }
        while(i<w1.size())
        {
             res+=w1[i];
             i++;
        }
          while(i<w2.size())
        {
             res+=w2[i];
             i++;
        }
        return res;

    }
};