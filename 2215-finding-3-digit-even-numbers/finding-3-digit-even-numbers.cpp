class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>res;
        map<int,int>mp;
        int n=digits.size();
        sort(digits.begin(),digits.end());
        for(int i=0;i<n;i++)
        {
            int num=0;
            if(digits[i]!=0)
            {
                num=num*10+digits[i];
                for(int j=0;j<n;j++)
                {
                    if(i!=j)
                    {
                        num=num*10+digits[j];
                        for(int k=0;k<n;k++)
                        {
                            if(i!=k&&j!=k&&digits[k]%2==0)
                            {
                                num=num*10+digits[k];
                                if(num>99&&num<1000&&mp[num]==0)
                                {
                                mp[num]=1;
                                res.push_back(num);
                                }
                                num/=10;
                            }

                        }
                        num/=10;
                      
                    }
                    
                }
                 num/=10;
            }
           
        }
        return res;
    }
};