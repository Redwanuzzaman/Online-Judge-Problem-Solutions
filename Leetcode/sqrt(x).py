class Solution:
    def mySqrt(self, x: int) -> int:
        left, right = 1, x//2
        ans = 0
        if x == 1: 
            return 1
        while left <= right:
            mid = (left + right) // 2
            sqr = mid * mid
            if sqr == x:
                return mid
            elif sqr < x:
                left = mid + 1
                ans = int(mid)
            else:
                right = mid - 1
        
        return ans
