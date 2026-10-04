class Solution {
public:
int dist(int a, int b) {
        int d = abs(a - b);
        return min(d, 10 - d);
    }
    int minRotations(int n, string s) {
        // int n = s.size();
        int originalCost = min(s[0] - '0', 10 - (s[0] -'0'));
        
        for(int i = 0; i < s.size() - 1; ++i)
        {
            int a = min(s[i]-'0' , s[i + 1]-'0');
            int b = max(s[i]-'0' , s[i + 1]-'0');
            int minn = min(b - a, 9 - b + a + 1);
        //    cout << minn << endl;
            originalCost += minn;
        }

        int ans = originalCost;
         ans = min(ans,
                  originalCost
                  - dist(0, s[0] - '0')
                  + dist(0, s[n - 1] - '0'));

        for(int i = 0; i < n - 1; ++i)
        {
            int oldCost = dist(s[i]-'0', s[i + 1]-'0');
            int newCost = dist(s[i]-'0', s[n - 1]-'0');
            ans = min(ans , originalCost - oldCost + newCost);
        }
        return ans;
    }
};
    