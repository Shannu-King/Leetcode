class Solution {
public:
    int earliestFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws, vector<int>& wd) {
        vector<pair<int,int>>p;
        for(int i=0;i<ls.size();i++)
        {
            p.push_back({ls[i],ld[i]});
        }
         vector<pair<int,int>>q;
        for(int i=0;i<ws.size();i++)
        {
            q.push_back({ws[i],wd[i]});
        }
        sort(p.begin(),p.end());
        sort(q.begin(),q.end());
        int minn=INT_MAX;
        for(int i=0;i<p.size();i++)
        {
            for(int j=0;j<q.size();j++)
            {
                int s=p[i].first+p[i].second;
                int m=max(s,q[j].first);
                m+=q[j].second;
                minn=min(minn,m);
            }
        }
        for(int i=0;i<q.size();i++)
        {
            for(int j=0;j<p.size();j++)
            {
                int s=q[i].first+q[i].second;
                int m=max(s,p[j].first);
                m+=p[j].second;
                minn=min(minn,m);
            }
        }
        return minn;
        
        
        
    }
};