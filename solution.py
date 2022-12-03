def maxProfit(prices):
    profit = 0
    NumOfDays = len(prices)
    maxNum = max(prices)
    minNum = min(prices)
    if (NumOfDays < 2):
        return 0
    elif (prices.index(maxNum) > prices.index(minNum)):
        return maxNum - minNum
    else:
        for i in range(0, NumOfDays, 1):
            for j in range(i + 1, NumOfDays):
                if (prices[j] - prices[i]) > profit:
                    profit = prices[j] - prices[i]
    return profit
            
arr = list(map(int, input().split())) 
print(maxProfit(arr))
