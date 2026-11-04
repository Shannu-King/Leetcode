class Solution:
    def isValid(self, s: str) -> bool:
        

        st = "[{("
         
        sta = []

        for ch in s:
            if ch in st:
                sta.append(ch)
            else:
                if not sta:
                    return False
                else:
                   if sta[-1] == '(' and ch == ')' or  sta[-1] == '[' and ch == ']' or   sta[-1] == '{' and ch == '}':
                        sta.pop()
                   else :
                      return False
        return len(sta) == 0