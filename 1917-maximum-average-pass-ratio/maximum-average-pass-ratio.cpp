class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int k) {
         priority_queue<
        pair<float, pair<int,int>>,         
        vector<pair<float, pair<int,int>>>, 
        less<pair<float, pair<int,int>>> 
    > pq;
    for(int i=0;i<classes.size();i++)
    {
        float an=(float)classes[i][0]/classes[i][1];
        int a=classes[i][0];
        int b=classes[i][1];
        a+=1;
        b+=1;
        float ann=(float)a/b;;
        float ans=(float) ann-an;
        pq.push({ans,{classes[i][0],classes[i][1]}});
    }
    while(k--)
    {
         auto t = pq.top();
         pq.pop();
         int a=t.second.first+1;
         int b=t.second.second+1;
          //cout<<a<<" "<<b<<endl;
       
         float ans=(float)(a+1)/(b+1)-(float)a/b;
         //cout<<ans<<" ";
         pq.push({ans,{a,b}});
    }
    double res=0;
    while(!pq.empty())
    {
       auto t = pq.top();
    pq.pop();
    int pass = t.second.first;
    int total = t.second.second;
    res += (double)pass / total;  
         //cout<<res<<" ";
        // cout<<res<<" ";
    }
    return res/classes.size();

    }
};