class Solution:
    def minMoves(self, nums: list[int]) -> int:
        
        minn = nums[0]
        for num in nums:
            minn = min(minn,num)
        answer = 0
        for num in nums:
            answer += (num - minn)
        return answer