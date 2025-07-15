bool isValid(char* s) 
{
    int a=0;
    int b=0,ans=1;
    int n=strlen(s);
    if(n<3)
    ans=0;
    else 
    {
        for(int i=0;i<n;i++)
        {
            if ((!('0'<= s[i]&&s[i]<='9'))&&(!('a'<=s[i]&&s[i]<='z'))&&(!('A'<=s[i]&&s[i]<='Z')))
            {
                ans=0;
                break;
            }
            else if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            a++;
            else if(('a'<=s[i]&&'z'>=s[i])||('A'<=s[i]&&'Z'>=s[i]))
            b++;
        }
    }
    if(ans==1&&a>=1&&b>=1)
    {
        ans=1;
        return ans;
        
    }
    else 
        ans=0;
    return ans;
    
}