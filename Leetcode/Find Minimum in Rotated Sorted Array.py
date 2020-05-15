class Solution:
    def findMin(self, nums: List[int]) -> int:
        left, right = 0, len(nums)-1
        if len(nums) == 1:
            return nums[0]
        while left <= right:
            mid = (left + right) // 2
            if nums[right] > nums[0]:
                return nums[0]
            if nums[mid+1] > nums[mid] and nums[mid-1] > nums[mid]:
                return nums[mid]
            if nums[mid] > nums[mid+1]:
                return nums[mid+1]
            if nums[mid-1] > nums[mid]:
                return nums[mid]
            if nums[0] < nums[mid]:
                left = mid + 1
            else:
                right = mid - 1
