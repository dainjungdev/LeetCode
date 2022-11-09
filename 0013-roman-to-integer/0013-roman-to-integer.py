class Solution:
    def romanToInt(self, s: str) -> int:
        translation = {'I': 1, 'V': 5, 'X': 10,
                       'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        ans, prev, cur = 0, 0, 0

        for c in s[::-1]:
            prev, cur = cur, translation[c]
            if cur < prev:
                ans -= cur
            else:
                ans += cur

        return ans
