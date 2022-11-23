# For Team B
def bestTimeToBuyStock(arr):
    l = 0
    maxProfit = 0
    # Increment right ptr every time
    # move left ptr when l > r
    for r in range(1, len(arr)):
        if(arr[l] > arr[r]):
            l = r
        else:
            # Check if max profit is there
            diff = arr[r] - arr[l]
            if(diff > maxProfit):
                maxProfit = diff
    return maxProfit

arr1 = [7,1,5,3,6,4]

if(bestTimeToBuyStock(arr1) == 5):
    print("Test 1 Successful!")

arr2 = [7,6,4,3,1]

if(bestTimeToBuyStock(arr2) == 0):
    print("Test 2 Successful!")