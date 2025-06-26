class Solution {
public:
int binaryToDecimalLeftToRight(const std::vector<int>& bin, int l, int r) {
    int result = 0;
    for (int i = l; i <= r; ++i) {
        result = result * 2 + bin[i];
    }
    return result;
}
    int longestSubsequence(string s, int k) {
        long long val=0;
        long long pows=1;
        int zero=0,one=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            zero++;
        }
     for(int i=s.size()-1;i>=0;i--)
     {
          
        if(s[i]=='1')
        {
            if(val+pows>k)
            continue;
                       
            val+=pows;
            one++;

          

            cout<<pows<<endl;
        }
        pows=pow(2,s.size()-i);
          if(pows>k)
            break;
       
     }
     return one+zero;
    }
};