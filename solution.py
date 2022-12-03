
maxprofit = 0
profit = 0
valid = True

user_input = input("Enter stock prices: ").split()
arr_of_integers = [int(item) for item in user_input]
size = len(arr_of_integers)

for x in range(size):
    if (arr_of_integers[x] <= 0):           
        print("Includes invalid price. Try again.")
        valid = False
        break
    for y in range(x + 1, size):
        profit = arr_of_integers[y] - arr_of_integers[x]
        if (profit > maxprofit):
            maxprofit = profit

if (valid == True):
    print("Max profit:", maxprofit)