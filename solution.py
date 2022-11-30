def getMaxP(stock):
    """
    A function that will return the max profit as an integer
    """
    low, maxP = stock[0], 0
    # low is the current lowest point from what has been iterated through or "seen"
    # it signifies the buying point "buy low" and is initialized as the first element in the array
    # maxP is the max profit and is initialized as 0

    for price in stock:
        # price is the price of the stock at the current iteration or "the price of the stock today"
        # iterate through the entire array
        if price < low:
            # compare the price today vs the lowest recorded price,
            # if the price of today is lower, it is not profitable to sell,
            low = price
            # so, you change the value of low to price today
        else:
            # else if price today is greater than or equal the lowest price,
            # it is possible to earn a profit
            profit = price - low
            # profit today will be the price today minus the lowest recorded price
            maxP = max(maxP, profit)
            # compare whether the profit today is larger than the highest profit in the past
            # make the higher one the max profit

    return maxP
    # return the max profit as an integer


if __name__ == "__main__":
    # standard python driver code just to make sure this file is ran as the main file and not as an imported module

    lst = str(input()).split()
    # get the input from the user as a string of integers separated by spaces
    # turn that string into an array using the split() method with spaces as the delimeter
    # assign that array to a variable named lst
    stock = [int(i) for i in lst]
    # since the input is originally a string, lst is an array of strings
    # using list comprehension, turn the elements of lst into integers
    # asssign the new integer array to the variable stock

    print(getMaxP(stock))
    # call the function getMaxP and print the result
