class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>>res;
        int k=0;
        for(int i=0;i<nums1.size();i++)
        {
            bool flag=true;
            for(int j=0;j<nums2.size();j++)
            {
                
                if(nums1[i][0]==nums2[j][0])
                {
                    res.push_back({nums1[i][0],nums2[j][1]+nums1[i][1]});
                   
                    nums2[j][0]=0;
                    nums2[j][1]=0;
                    flag=false;
                   
                    break;
                   


                }
            }
            if(flag)
            {
                
                  res.push_back({nums1[i][0],nums1[i][1]});
                cout<<"yes"<<" ";
                cout<<nums1[i][0]<<" "<<nums1[i][1];
               
            }
            
        }
        for(int i=0;i<nums2.size();i++)
            {
                if(nums2[i][0]!=0)
                {
                    res.push_back({nums2[i][0],nums2[i][1]});
                }
            }
            sort(res.begin(),res.end());
        return res;
    }
};