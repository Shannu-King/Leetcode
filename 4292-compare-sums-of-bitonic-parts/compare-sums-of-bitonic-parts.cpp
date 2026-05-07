class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int maxx=0;
        long long int s=0;
        for(int i=0;i<nums.size();i++)
        {
            maxx=max(nums[i],maxx);
            s+=nums[i];
        }
       long long  int l=0;
        bool flag=false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==maxx)
            {
                flag=true;
            }
            if(flag&&nums[i]!=maxx)
            {
                break;
            }
            l+=nums[i];
        }
        s=s-l+maxx;
        //cout<<s<<" "<<l<<endl;
        if(l>s)
        return 0;
        else if(l<s)
        return 1;
        return -1;
    }
};