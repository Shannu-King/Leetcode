class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        map = {}
        map[0] = map.get(0,0) + 1
        s = 0
        count = 0
        for num in nums:
            s = s + num
            if (s- k) in map :
                count += map[s - k]
            map[s] = map.get(s,0) + 1
            #print(s)
        return count
 