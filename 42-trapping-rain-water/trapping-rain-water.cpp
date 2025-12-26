class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>left(height.size(),0);
        left[0]=height[0];
        int ans=0;
        
        for(int i=1.;i<height.size();i++)
        {
            left[i]=max(left[i-1],height[i]);
        }
        int right=0;
        for(int i=height.size()-1;i>=0;i--)
        {
            right=max(right,height[i]);
            ans+=min(left[i],right)-height[i];
        }
        return ans;
    }
};