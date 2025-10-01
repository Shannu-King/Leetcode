int numWaterBottles(int a, int e) {
    int sum=a;
    int bot=0;
    while(a>=e)
    {
        bot=a%e;
        a=a/e;
        
         sum=sum+a;
        a=a+bot;
      
       

    }
    return sum;
}