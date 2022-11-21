#O(n) solution

def calcProfit(stockPrices):
    # Initializing two pointers to go through the array in a single loop instead of 
    # the double for-loops approach that I took in the brute force solution.

    # "first" checks the stock price, "second" checks the second price (selling price)
    first, second = 0, 1
    maxProfit = 0
    numDays = len(stockPrices)

    for i in range(second, numDays):
        # Calculating current profit between two days.
        profit = stockPrices[second] - stockPrices[first]

        # If current profit is more than the maxProfit, we set new maxProfit.
        if profit > maxProfit:
            maxProfit = profit

        # If the profit is less than the maxProfit, we move forward to the next
        # two days to check if we can find a better profit.

        elif stockPrices[second] < stockPrices[first]:
            first = second
        second += 1

    return maxProfit

# Tester
def main():
    stocks = [7,1,5,3,6,4]
    print(calcProfit(stocks))

main()
