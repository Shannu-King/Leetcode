class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
       vector<int>res=colors;
       for(int i=0;i<colors.size();i++)
       res.push_back(colors[i]);
       int ans=0;
       int l=1;
       for(int i=0;i<colors.size()+k-2;i++)
       {
        if(res[i]==res[i+1])
        l=1;
        else
        l++;
        if(l>=k)
        ans++;
       }
       return ans;
    }
};