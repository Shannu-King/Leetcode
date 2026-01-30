class Solution {
public:
    vector<int>bfs(int s,vector<vector<int>>&adj,int n)
    {
        vector<int>dis(n,-1);
        queue<int>q;
        q.push(s);
        dis[s]=0;
        while(!q.empty())
            {
                int u=q.front();
                q.pop();
                for(int v:adj[u])
                    {
                        if(dis[v]==-1)
                        {
                            dis[v]=dis[u]+1;
                            q.push(v);
                            
                        }
                        
                    }
              
            }
          return dis;
    }
    int specialNodes(int n, vector<vector<int>>& edges, int x, int y, int z) {

        vector<vector<int>>adj(n);
        for(auto &e:edges)
            {
                adj[e[0]].push_back(e[1]);
                adj[e[1]].push_back(e[0]);
                
            }
        vector<int>dx=bfs(x,adj,n);
         vector<int>dy=bfs(y,adj,n);
         vector<int>dz=bfs(z,adj,n);
        int cn=0;
        for(int i=0;i<n;i++)
            {
                vector<int>d={dx[i],dy[i],dz[i]};
                sort(d.begin(),d.end());
                long long a=d[0];
                long long b=d[1];
                long long c=d[2];
                if((a*a)+(b*b)==(c*c))
                cn++;
            }
        return cn;
        
        
    }
};