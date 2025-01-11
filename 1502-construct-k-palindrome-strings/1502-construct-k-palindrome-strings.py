class Solution:
    def canConstruct(self, s: str, k: int) -> bool:
        if k>len(s):
            return False
        if len(s) == k:
            return True
        count=0
        for char in set(s):
            if s.count(char)%2:
                count+=1
        return count<=k