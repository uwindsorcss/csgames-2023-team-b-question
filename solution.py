difference = 0

price = input("Enter: ")

priceList = price.split()

for i in range(1, len(priceList)):
  for j in range(i - 1):
    temp = int(priceList[i]) - int(priceList[j])
    if temp > difference:
      difference = temp

print(difference)