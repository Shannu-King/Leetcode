class Solution {
public:
    
    int solve(vector<int>&ls,vector<int>&ld,vector<int>&ws,vector<int>&wd)
    {
        int s1=INT_MAX;

        for(int i=0;i<ls.size();i++)
        {
            s1=min(s1,ls[i]+ld[i]);
        }

        int s2=INT_MAX;

        for(int i=0;i<ws.size();i++)
        {
            s2=min(s2,max(s1,ws[i])+wd[i]);
        }

        return s2;
    }

    int earliestFinishTime(vector<int>&ls,vector<int>&ld,vector<int>&ws,vector<int>&wd) {
        
        int maxx1=solve(ls,ld,ws,wd);

        int maxx2=solve(ws,wd,ls,ld);

        return min(maxx1,maxx2);
    }
};