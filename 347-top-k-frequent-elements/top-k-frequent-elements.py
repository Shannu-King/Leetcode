class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        

        map = {}
        v = []
        for num in nums :
            map[num] = map.get(num, 0) + 1
        for key,value in map.items():
            v.append((value,key))
        v.sort(reverse = True)
        answer = []
        index = 0
        while k > 0 and index < len(v):
            answer.append(v[index][1])
            index += 1
            k -= 1
        return answer




