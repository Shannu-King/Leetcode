class Solution {
public:
    bool hasAllCodes(string s, int k) {
       set<string>st;
        if(s.size()<k)
        return 0;
        int c=0;
        for(int i=0;i<k;i++)
        {
        
            string l=s.substr(i,i+k-c);

           // cout<<i<<" "<<i+k<<" ";
            //cout<<s.substr(i,i+k-c)<<" ";
            st.insert(l);
            c++;
        }
       
        for(int i=k;i<s.size()-k+1;i++){
            string l=s.substr(i,i+k-c);
            //cout<<l<<" ";
            st.insert(l);
            c++;
        }
        int res=pow(2,k);
       // cout<<res<<" ";
    //   for(auto i:st)
    //   cout<<i<<" ";
        return st.size()>=res;
    }
};