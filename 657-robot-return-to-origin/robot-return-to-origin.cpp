class Solution {
public:
    bool judgeCircle(string moves) {
        int c=0,d=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='U')
            c++;
            else if(moves[i]=='D')
            c--;
            else if(moves[i]=='L')
            d--;
            else
            d++;
            
            
        }
        return c==0&&d==0;
    }
};