class Solution {
public:
    int compareVersion(string v1, string v2) {
        vector<int>res1;
        vector<int>res2;
        bool flag=true;
        string s="";
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]=='.')
            {
                if(s!="")
                res1.push_back(stoi(s));
                else
                res1.push_back(0);
                s="";

            }
            else
            {
                s+=v1[i];


            }
        }
        if(s!="")
        res1.push_back(stoi(s));
        
      s="";
        for(int i=0;i<v2.size();i++)
        {
            if(v2[i]=='.')
            {
                if(s!="")
                res2.push_back(stoi(s));
                else
                res2.push_back(0);
                s="";

            }
            else
            {
                s+=v2[i];


            }
        }
        if(s!="")
        res2.push_back(stoi(s));
        int i=0;
        for(i=0;i<min(res1.size(),res2.size());i++)
        {
            if(res1[i]>res2[i])
            return 1;
            else if(res1[i]<res2[i])
            return -1;
        }
        if(i<res1.size()){
             for(int j=i;j<res1.size();j++)
        if(res1[j]!=0)
        return 1;}
        if(i<res2.size())
      {  
        for(int j=i;j<res2.size();j++)
        if(res2[j]!=0)
        return -1;}
        return 0;


    }
};