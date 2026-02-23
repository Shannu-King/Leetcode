class Solution {
public:
    bool isDigitorialPermutation(int n) {
        map<int,int>mp;
        mp[0]=1;
        mp[1]=1;
       
        for(int i=2;i<10;i++)
        {
            mp[i]=mp[i-1]*i;
           
        }
        long long temp=n;
        long long ans=0;
        while(n>0)
        {
            int k=n%10;
            ans+=(mp[k]);
            //cout<<mp[k]<<" ";
            n=n/10;
         
        }
        string kk=to_string(ans);
      string s=to_string(temp);
   //  cout<<s<<" "<<kk<<" ";
      sort(s.begin(),s.end());
      do
      {
        if(s==kk)
        return true;
      }while(next_permutation(s.begin(),s.end()));
      return false;
      
    }
};