class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        int s=0;
        int n=meetings.size();
       
        int last=0;
        for(int i=0;i<meetings.size();i++)
        {
            int a=meetings[i][0];
            int b=meetings[i][1];
            
            if(a>last+1)
            {
                s+=(a-last-1);
            }
            last=max(last,b);
         

        }
        if(last<days)
        {
            s+=(days-last);
        }
        
        return s;
    }
};