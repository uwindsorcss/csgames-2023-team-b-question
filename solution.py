def solution(array):
    """Stock chooser"""
    buy, sell = 0, 1 #indices
    max_profit = 0 #max so far
    while sell < len(array): #iterate
        profit = array[sell] - array[buy] #current profit
        if profit > 0: #if profit positive, check if there's a new max
            max_profit = profit if profit > max_profit else max_profit
        else: #otherwise, move up the buy index
            buy = sell
        sell += 1 #check next price
    return max_profit

def main():
    """Driver code"""
    #get user input
    array = [int(n) for n in input().split(' ')]
    #print result
    print(solution(array))

main()
