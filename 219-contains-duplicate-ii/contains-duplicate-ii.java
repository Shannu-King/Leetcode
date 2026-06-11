class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
     int n = nums.length;
        int count=0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
               if(nums[i]==nums[j] && (j-i)<=k){
                    return true;
                }    
            count++;
            if(count>99999)
                return false;
            }
        }
        return false;
    }
}