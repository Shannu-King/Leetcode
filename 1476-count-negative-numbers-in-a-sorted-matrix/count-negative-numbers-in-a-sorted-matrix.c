int countNegatives(int** a, int n, int* m) {
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m[i];j++)
        {
            if(a[i][j]<0)
            c++;
        }
    }
    return c;
    
}