class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int start=0,end=0;
        int l=0,r=arr.size()-1;
        int n=arr.size();
        while(l<r)
        {
            if(r-l+1==k)
            {
                start=l;
                end=r;
                break;
            }
            if(abs(arr[r]-x)>=abs(arr[l]-x))
            {
                r--;
            }
            else
            l++;
        }
        vector<int>res;
        for(int i=l;i<=r;i++)
        res.push_back(arr[i]);
        return res;
    }
};