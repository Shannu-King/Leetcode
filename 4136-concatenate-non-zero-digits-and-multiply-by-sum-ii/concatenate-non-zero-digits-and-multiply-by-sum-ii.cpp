class Solution {
public:
    static const int MOD = 1000000007;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {

        int n = s.size();

        vector<long long> prefValue(n);
        vector<long long> prefSum(n);
        vector<int> prefCnt(n);

        vector<long long> pow10(n + 1);
        pow10[0] = 1;

        for (int i = 1; i <= n; i++)
            pow10[i] = (pow10[i - 1] * 10) % MOD;

        long long value = 0;
        long long sum = 0;
        int cnt = 0;

        for (int i = 0; i < n; i++) {

            int d = s[i] - '0';

            if (d != 0) {
                value = (value * 10 + d) % MOD;
                sum += d;
                cnt++;
            }

            prefValue[i] = value;
            prefSum[i] = sum;
            prefCnt[i] = cnt;
        }

        vector<int> ans;

        for (auto &q : queries) {

            int l = q[0];
            int r = q[1];

            long long rightValue = prefValue[r];
            long long leftValue = (l == 0 ? 0 : prefValue[l - 1]);

            int nonZeroCnt = prefCnt[r] - (l == 0 ? 0 : prefCnt[l - 1]);

            long long x = (rightValue -
                          (leftValue * pow10[nonZeroCnt]) % MOD
                          + MOD) % MOD;

            long long digitSum = prefSum[r] -
                                (l == 0 ? 0 : prefSum[l - 1]);

            ans.push_back((x * (digitSum % MOD)) % MOD);
        }

        return ans;
    }
};