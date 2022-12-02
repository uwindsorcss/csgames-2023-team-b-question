
def bestStock(entry):
    prices = entry.split(" ")
    best = 0
    counter = 0

    for x in range(len(prices) - 1):
        if prices[x] > prices[x+1]:
            counter +=1
        for y in prices[counter:]:
            if (int(y) - int(prices[x])) > best:
                best = (int(y) - int(prices[x]))
        counter +=1
    return best
                
print(bestStock(input()))
