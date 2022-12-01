def main():
    while True:
        selection = input("Enter U (Test user inputs), T (Print test values), E/X (Exit): ").upper()
        print("-" * 64)

        if selection == "E" or selection == "X":
            break
        
        elif selection == "U":
            prices_string = input("Enter the prices separated by spaces: ")
            prices_int = pricesListFrom(prices_string)
            print(f"Prices: {prices_int}")
            print(f"Profit: {findProfit(prices_int)}")

        elif selection == "T":
            lists = []
            lists.append([7,1,5,3,6,4])
            lists.append([7,6,4,3,1])
            lists.append([0])
            lists.append([1])
            lists.append([])
            lists.append([5,10,1,3])
            lists.append([4,11,3,9,2,7,1,9])

            for list in lists:
                print(f"Testing {list}...")
                print(f"Profit: {findProfit(list)}")

        print("-" * 64)

def findProfit(prices):
    if not prices:
        return 0

    profit = 0
    min_price = prices[0]

    for current_price in prices[1:]:
        if current_price < min_price:
            min_price = current_price

        else:
            profit = max(profit, current_price-min_price)
    
    return profit

def pricesListFrom(input_string):
    num_string = ""
    int_list = []

    for i in input_string:
        if i == " ":
            int_list.append(int(num_string))
            num_string = ""
        else:
            num_string += i
    int_list.append(int(num_string))
    
    return int_list

if __name__ == "__main__":
    main()