int numWaterBottles(int a, int e) {
    int sum=a;
    int bot=a;
    while(a>=e)
    {
        bot=a%e;
        a=a/e;
        
         sum=sum+a;
        a=a+bot;
        bot=0;
       

    }
    return sum;
}