def solve(stocks):
    lowest = stocks[0]
    amountMade = 0

    for stock in stocks:
        if stock < lowest:
            lowest = stock
        elif stock - lowest > amountMade:
            amountMade = stock - lowest

    return amountMade


if __name__ == '__main__':
    tests = [
        ([7, 1, 5, 3, 6, 4], 5),
        ([7, 6, 4, 3, 2, 1], 0),
        ([2, 4, 1, 4, 5, 1], 4),
        ([6, 4, 7, 3, 2, 5], 3),
        ([2, 8, 1, 6, 4, 3], 6)
    ]

    for test in tests:
        solution = solve(test[0])
        print(f"Test Case: {test[0]}")
        print(f"Test Solution: {test[1]}")
        print(f"Actual Solution: {solution}")
        print(("SUCCESS" if solution == test[1] else "FAILURE") + "\n")
