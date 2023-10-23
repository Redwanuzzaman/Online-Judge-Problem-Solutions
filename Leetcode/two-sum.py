class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        visited = {}
        for i in range(len(nums)):
            diff = target - nums[i]
            if diff in visited:
                return [visited[diff], i]
            else:
                visited[nums[i]] = i
        
