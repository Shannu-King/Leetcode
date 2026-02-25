class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string>set;
        if(s.size()<k)
            return false;
        int n=s.size();
        for(int i=0;i<k;i++){
            string l=s.substr(i,k);
            set.insert(l);
        }
        for(int i=k;i<s.size()-k+1;i++){
            string l=s.substr(i,k);
            set.insert(l);
        }
        int res=pow(2,k);
        return set.size()==res;
        
    }
};