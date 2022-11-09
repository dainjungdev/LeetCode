class Solution:
    def isPalindrome(self, x: int) -> bool:
        orig = x
        rev = 0

        while x > 0:
            rev = rev * 10 + x % 10
            x //= 10

        return orig == rev
