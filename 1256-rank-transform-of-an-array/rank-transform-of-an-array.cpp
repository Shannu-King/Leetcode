class Solution {
public:
int binarysearch(vector<int>& arr,int low,int high,int target)
{
    
    while(low<=high){
        int mid=(low+high)/2;
     if(arr[mid]==target)
    return mid;
    else if(arr[mid]>target)
    {
        high--;
    }
    else
    low++;
    }
    return -1;
}
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        if(n==0)
        return {};
        vector<int>res;
        vector<int>temp=arr;
        int k=0;
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size()-1;i++)
        {
            if(temp[i]==temp[i+1])
            {
                temp.erase(temp.begin()+i);
                i--;
            }
        }
        // for(int i=0;i<temp.size();i++)
        // {
        //     cout<<temp[i]<<endl;
        // }
       for(auto& it: arr){
            int rank = lower_bound(temp.begin(), temp.end(), it) - temp.begin() + 1;
            res.push_back(rank);
        }
        return res;
    }
};