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