class Solution {
public:
    int maxArea(vector<int>& height) {
        int m=0;
        int l=0;
        int r=height.size()-1;
        while(l<r)
        {
            m=max(m,(r-l)*min(height[r],height[l]));
            if(height[l]<height[r])
            l++;
            else
            r--;
        }
        return m;
    }
};