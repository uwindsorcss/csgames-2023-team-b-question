
#Arfaa Rashid
#solution.py
#Team B Solution

#finds the lowest price and determines best transaction using all following days
#repeats this process with all prices up to and not including the previously tested lowest price
#outputs the highest profit possible from any 1 transaction

def maxProfit(rPrices):
    #function takes a sublist of the prices with the day with the lowest price and all the days following
    #finds best day to sell, ie day with highest price, and returns the profit made 

    if len(rPrices) > 1:                    #if less than 1, then day with lowest price is only day, and no transaction can be made
        buy = rPrices[0]
        sell = max(rPrices[1:])
        return int(sell)-int(buy)
    else:
        return 0

#not sure if input will be provided as txt or what, so simply reading in normally as a line
prices = input().split(" ")
prices = list(map(int,prices))

maxProfits = []
while len(prices) > 0:
    minPos = prices.index(min(prices))                  #finds day on which stock price is lowest (best day to buy)
    maxProfits.append(maxProfit(prices[minPos:]))       #sends sublist with that day and all following days to the function, as this is the window in which that transaction can be made

    prices = prices[:minPos]                        #slices list of stock prices up to the lowest price. This is because there could be a day with a very high price before the day with the lowest price, thus outside its transaction window. It may still produce a higher profit using a buying price that isnt the lowest.
                                                    #thus, the process is repeated until the first day's price is tried
print(max(maxProfits))