int maxBottlesDrunk(int na, int nb) {
   int s=na;
   while(na>=nb)
   {
    if(na>=nb)
    na-=nb;
    s++;
    na++;
    nb++;

   }
   return s;
    
}