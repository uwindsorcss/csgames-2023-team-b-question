def main():

    stocks = [int(each) for each in input("Please enter the input: ").split()]
    print(max_profit(stocks))

def max_profit(stocks):

    min_price = stocks[0]
    max_profit = stocks[1] - min_price

    for price in stocks[1:]:
        if price < min_price: min_price = price
        elif price - min_price > max_profit: max_profit = price - min_price

    if max_profit <= 0: return 0 # there isn't a single profitable trade in the array
    return max_profit # amount of profit

if __name__ == "__main__": main()