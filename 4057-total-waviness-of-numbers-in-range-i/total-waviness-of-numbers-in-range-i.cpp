class Solution {
public:
int fun(string s)
{
   
    int c=0;
    for(int i=1;i<s.size()-1;i++)
    {
        if((s[i]<=s[i-1]&&s[i]>=s[i+1])||((s[i]>=s[i-1]&&s[i]<=s[i+1])))
      continue;
       else
       c++;
    }
     return c;
    
}
    int totalWaviness(int num1, int num2) {
        int c=0;
        for(int i=num1;i<=num2;i++)
        {
            
            c+=fun(to_string(i));
        }
        return c;
    }
};