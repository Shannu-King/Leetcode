int maximum69Number (int num) {
    int a[10000];
    int n=num;
    int i=0;
    int s;
    while(n!=0)
    {
        s=n%10;
        a[i++]=s;
        n/=10;
    }  
    for(int j=i-1;j>=0;j--)
    {
        if(a[j]==6)
        {
            a[j]=9;
            break;
        }
    }
    int sum=0;
    for(int j=i-1;j>=0;j--)
    {
        sum=sum*10+a[j];
    }
    return sum;
}