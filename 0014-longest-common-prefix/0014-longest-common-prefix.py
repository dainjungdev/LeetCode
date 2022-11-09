class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        shortest = min(strs, key=len)
        
        for i, c in enumerate(shortest):
            if any(word[i] != c for word in strs):
                return shortest[:i]

        return shortest