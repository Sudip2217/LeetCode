class Solution:
    def wordSubsets(self, words1: List[str], words2: List[str]) -> List[str]:
        wordA = Counter()
        
        for b in words2:
            wordA |= Counter(b)
        return [word for word in words1 if not wordA - Counter(word)]

