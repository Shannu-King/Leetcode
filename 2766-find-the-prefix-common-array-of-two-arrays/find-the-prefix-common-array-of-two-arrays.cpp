class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
       vector<int>freq(a.size()+1,0);
        vector<int>res;
        int c=0;
        for(int i=0;i<a.size();i++)
        {
            freq[a[i]]++;
          
           if(freq[a[i]]==2)
           c++;
           freq[b[i]]++;
           if(freq[b[i]]==2)
           c++;
            res.push_back(c);
        }
        return res;
    }
};