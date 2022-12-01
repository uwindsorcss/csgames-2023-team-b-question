def max_stock_profit(stocks):
    min = stocks[0]
    min_index = 0
    
    for i in range(len(stocks)):
        if stocks[i] < min:
            min = stocks[i];
            min_index = i
            
    if (min_index != len(stocks) - 1):
        max = stocks[min_index + 1]    
        for i in range(min_index, len(stocks)):
            if stocks[i] > max:
                max = stocks[i]
        return max - min
        
    else:
        return 0
    
stocks1 = [7,1,5,3,6,4]
stocks2 = [7,6,4,3,1]

if(max_stock_profit(stocks1) == 5):
    print("Test 1 passed")

if(max_stock_profit(stocks2) == 0):
    print("Test 2 passed")