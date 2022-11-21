def calcProfit(stockPrices):
    maxProfit = 0
    for i in range(len(stockPrices)):
        for j in range(i+1, len(stockPrices)):
            profit = stockPrices[j] - stockPrices[i]
            if profit > maxProfit:
                maxProfit = profit
    return maxProfit

def main():
    stocks = [7,1,5,3,6,4]
    print(calcProfit(stocks))

main()
