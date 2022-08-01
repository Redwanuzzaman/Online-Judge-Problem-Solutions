class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        max_money = 0
        for banks in accounts:
            current_money = sum(banks)
            max_money = max(max_money, current_money)
        return max_money
