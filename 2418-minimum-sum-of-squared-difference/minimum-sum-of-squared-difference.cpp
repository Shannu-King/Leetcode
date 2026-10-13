class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        vector<int>diff;

        int maxx = 0;
        long long total = 0;
        for(int i = 0; i < nums1.size(); ++i)
        {
            diff.push_back(abs(nums1[i] - nums2[i]));
            maxx = max(maxx, diff[i]);
            total += diff[i];
        }


       long long  int k = 1LL * k1 + k2;
       if(k >= total)
       return 0;
       int low = 0;
       int high = maxx;

       while(low < high)
       {
            int mid = low + (high - low) / 2;

           long long int needed = 0;
            for(int d : diff)
            {
                if(d > mid)
                needed += d - mid;
            }
            if(needed <= k)
            high = mid;
            else
            low = mid + 1;
       }
       long long ans = 0;
       long long needed = 0;
       for(int i = 0; i < diff.size(); ++i)
       {
        int req = min(diff[i], low);
        ans += 1LL * req * req;
        if(diff[i] > low)
        needed += diff[i] - low;

       }
       long long remaining = k - needed;
       ans -= remaining * (2LL * low - 1);
       return ans;


    }
};