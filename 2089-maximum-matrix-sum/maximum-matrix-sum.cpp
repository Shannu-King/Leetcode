class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long s=0;
        int maxx=INT_MAX;
        int c=0;
        bool flag=false;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                s+=abs(matrix[i][j]);
                
                    maxx=min(abs(matrix[i][j]),maxx);
                    if(matrix[i][j]<0)
                    c++;
                
                

            }
        }
      
        if(c%2!=0)
        {
            s-=2*maxx;
        
        }
        return s;
    }
};