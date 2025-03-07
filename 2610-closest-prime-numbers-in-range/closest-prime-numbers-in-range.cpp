class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int>p(right+1,1);
        p[0]=1,p[1]=1;
        for(int i=2;i*i<=right;i++)
        {
            if(p[i])
            {
                for(int j=i*i;j<=right;j+=i)
                {
                    p[j]=0;
                }
            }
        }
            vector<int>primes;
            for(int i=2;i<=right;i++)
            {
                if(p[i]&&i>=left)
               primes.push_back(i);
            }
          if(primes.size()<2)
          return {-1,-1};
            int diff=INT_MAX;
            int a=0;
            int b=0;
            for(int i=1;i<primes.size();i++)
            {
                
                    if(primes[i]-primes[i-1]<diff)
                    {
                        a=primes[i-1];
                        b=primes[i];
                        diff=primes[i]-primes[i-1];
                    }
                
            }
            return {a,b};

        

    }
};