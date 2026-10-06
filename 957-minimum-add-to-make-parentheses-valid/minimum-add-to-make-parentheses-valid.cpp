class Solution {
public:
    int minAddToMakeValid(string s) {
        int c = 0;
        int ans = 0;
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == '(')
            c++;
            else
            c--;
            if(c < 0){
            ans ++;
            c = 0;}
           // cout << c << ans << endl;
        }
        if( c > 0)
        ans = ans + c;
        return ans;
    }
};