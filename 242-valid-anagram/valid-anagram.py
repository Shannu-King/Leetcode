class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        map = {}
        for ch in s :
            map[ch] = map.get(ch, 0) + 1
        map2 = {}
        for ch in t:
            map2[ch] = map2.get(ch, 0) + 1
        return map == map2