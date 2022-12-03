def profit(stonks):
    highest = float('-inf')
    lowest = float('inf')
    for i in stonks:
        if i<lowest:
            lowest = i

        if (i - lowest) > highest:
            highest = i-lowest

    return highest