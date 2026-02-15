class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1,j=b.size()-1;
        string res="";
        int carry=0;
        while(i>=0&&j>=0)
        {
            if(a[i]=='1'&&b[j]=='1'&&carry==1)
            res.push_back('1');   
            else if(a[i]=='1'&&b[j]=='1'){
            res.push_back('0');
            carry=1;}
            else if((a[i]=='1'||b[j]=='1')&&(carry==1)){
                res.push_back('0');
            }
            else if(a[i]=='1'||b[j]=='1')
            res.push_back('1');
            else if(carry==1){
            res.push_back('1');
            carry=0;}
            else res.push_back('0');
            i--;
            j--;

        }
        while(i>=0)
        {
            if(carry==1&&a[i]=='1')
            {
                res.push_back('0');
            }
            else if(a[i]=='1')
            res.push_back('1');
            else if(carry==1&&a[i]=='0'){
            res.push_back('1');
            carry=0;}
            else
            res.push_back('0');
            i--;
        }
         while(j>=0)
        {
            if(carry==1&&b[j]=='1')
            {
                res.push_back('0');
            }
            else if(b[j]=='1')
            res.push_back('1');
            else if(carry==1&&b[j]=='0'){
            res.push_back('1');
            carry=0;}
            else
            res.push_back('0');
            j--;
        }
        if(carry)
        res.push_back('1');
        reverse(res.begin(),res.end());
        return res;
    }
};