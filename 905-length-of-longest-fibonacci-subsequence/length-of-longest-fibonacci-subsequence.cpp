class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        unordered_set<int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mp.insert(arr[i]);
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            int a=arr[i];
            for(int j=i+1 ;j<n;j++)
            {
                int b=arr[j];
                int c=2;
                while(mp.find(a+b)!=mp.end())
                {
                    c++;
                    int temp=b;
                    b=a+b;
                    a=temp;

                }
                a=arr[i];
                res=max(res,c);
            }
            
        }
        if(res==2)
        return 0;
        return res;
    }
};