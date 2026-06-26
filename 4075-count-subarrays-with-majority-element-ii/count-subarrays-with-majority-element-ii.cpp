class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            nums[i] = (nums[i] == target ? 1 : -1);
        }

        vector<int> a(2 * n + 1, 0);

        int b = n;
        a[b] = 1;

        long long ans = 0, cur = 0;
        int sum = 0, prev = 0;

        for (int i = 0; i < n; i++) {
            sum += nums[i];

            if (sum > prev)
                cur += a[prev + b];
            else
                cur -= a[sum + b];

            ans += cur;
            a[sum + b]++;
            prev = sum;
        }

        return ans;
    }
};