class Solution:
    def isPalindrome(self, x: int) -> bool:
        negative = x < 0
        x = orgin = abs(x)
        reversed_x = 0
        
        while x != 0:
            reversed_x = reversed_x * 10 + x % 10
            x //= 10
            
        if not negative and reversed_x == orgin:
            return True
        else:
            return False
