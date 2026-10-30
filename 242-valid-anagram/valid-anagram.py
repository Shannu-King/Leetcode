class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        map = {}
        for ch in s :
            map[ch] = map.get(ch, 0) + 1
       
        for ch in t:
           if ch not in map:
             return False
           map[ch] -= 1
           if map[ch] == 0 :
            del map[ch]

        return not map