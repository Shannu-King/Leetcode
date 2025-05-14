class Solution {
public:
    int minDeletion(string s, int k) {
        int a[26]={0};
        for(int i=0;i<s.size();i++)
        {
            a[s[i]-'a']++;
        }
        sort(a,a+26);
        int c=0;
        for(int i=0;i<26;i++)
        {
            if(a[i]!=0)
            c++;
        }
        if(c<=k)
        return 0;
        int count=0;
        for(int i=0;i<26;i++)
        {
             if(c<=k)
             return count;
            if(a[i]!=0)
            {
                count+=a[i];
                c--;
            }
        }
        return 0;
    }
};