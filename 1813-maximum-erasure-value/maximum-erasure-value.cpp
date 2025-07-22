class Solution {
public:
    int maximumUniqueSubarray(vector<int>& arr) {
        int end=0;
        int s=0;
        int maxx=0;
        map<int,int>mp;
        for(int start=0;start<arr.size();start++)
        {
            mp[arr[start]]++;
            s+=arr[start];
            while(mp[arr[start]]>1)
            {
                mp[arr[end]]--;
                s-=arr[end];
                end++;
            }
            maxx=max(maxx,s);

        }
        return maxx;
    }
};