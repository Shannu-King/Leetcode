class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        
        s = 0
        map = {}
        ans = 0
        map[0] = -1
        for i in range(len(nums)):
            if nums[i] == 0:
                s = s + 1
            else :
                s = s - 1
            if s in map :
                ans = max(ans,i - map.get(s))
            else :
                map[s] = i
        return ans 