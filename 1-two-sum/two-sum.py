class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        map = {}
        for i in range(len(nums)):
            required = target - nums[i]
            if required in map:
                return [map.get(required),i]
            map[nums[i]] = i
        return [-1,-1]
        