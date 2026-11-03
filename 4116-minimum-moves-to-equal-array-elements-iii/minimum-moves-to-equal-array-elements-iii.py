class Solution:
    def minMoves(self, nums: List[int]) -> int:
        

        maxx = nums[0]

        res = 0
        
        for num in nums:
            maxx = max(maxx, num)
        
        for num in nums:
            res += (maxx - num)
        return res