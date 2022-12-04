# Lamina Zaman
# solution.py

profit = 0 # keeps track of the maximum possible profit

price = input("Enter: ") # user input

priceList = price.split() # splits the input into an array

for i in range(1, len(priceList)): # get first number
  for j in range(i - 1): # get second number (only looking at numbers before the first number)
    diff = int(priceList[i]) - int(priceList[j])
    if diff > profit: # check if difference in numbers is greater than the current profit
      profit = diff

print(profit)