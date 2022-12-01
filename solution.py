def main() -> None: # driver code

    stocks: list[int] = [int(each) for each in input("Please enter the input: ").split()] # receive space-separated list of prices, as defined in the README, and parse to list of ints
    print(max_profit(stocks)) # generates fairy dust or something idk, the print() function will forever be a mystery to me

def max_profit(stocks: list[int]) -> int: # function that actually calculates the profit

    min_price: int = stocks[0] # the lowest price to buy at
    max_profit: int = stocks[1] - min_price # the profit made by the best buy/sell combo found so far

    for price in stocks[1:]:
        if price < min_price: min_price = price # we have found a better value to buy at
        elif price - min_price > max_profit: max_profit = price - min_price # we can make more profit by selling *today* versus the previous highest value day

    if max_profit <= 0: return 0 # there isn't a single profitable trade in the array
    return max_profit # amount of profit

if __name__ == "__main__": main()
