def maxProfit(prices)->int:
    minp=prices[0]
    maxp=0;
    for i in range(1,len(prices)):
        if prices[i]<minp:
            minp=prices[i]
        maxp=max(maxp,prices[i]-minp)
    return maxp
        
list=[7,1,5,3,6,4]
print(maxProfit(list))