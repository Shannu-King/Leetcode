class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        int freq[51]={0};
        int freq1[51]={0};
        vector<int>res;
        for(int i=0;i<a.size();i++)
        {
            freq[a[i]]++;
            freq1[b[i]]++;
            int c=0;
            for(int j=0;j<51;j++)
            {
                if(freq[j]!=0&&freq[j]==freq1[j])
                c++;
            }
            res.push_back(c);
        }
        return res;
    }
};