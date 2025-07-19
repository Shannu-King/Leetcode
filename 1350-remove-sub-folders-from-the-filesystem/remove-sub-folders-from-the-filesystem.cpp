class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        vector<string>res;
        res.push_back(folder[0]);
        for(int i=1;i<folder.size();i++)
        {
            string s=res.back();
            int m=s.size();
            string t=folder[i];
            int n=folder.size();
             if(!(t.size()>s.size()) || t.substr(0,m)!=s || t[m]!='/')
             res.push_back(t);

            }
        
            
        
        return res;

    }
};