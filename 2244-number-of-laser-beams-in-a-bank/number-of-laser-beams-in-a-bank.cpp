class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev=0;
        int s=0;
        for(int i=0;i<bank.size();i++)
        {
            int c=0;
            for(int j=0;j<bank[i].size();j++)
            {
                if(bank[i][j]=='1'){
                c++;
                if(i==0)
                prev++;
                }
            }
            if(c==0)
            continue;
            if(i==0)
            continue;
            else
            {
                
                s+=(prev*c);
                prev=c;
            }
           
        }
        return s;
    }
};