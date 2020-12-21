def solve(self, li):
        low = 23828332
        profit = 0
        for i in li:
            low = min(i, low)
            profit = max(profit, i - low)
        return profit
