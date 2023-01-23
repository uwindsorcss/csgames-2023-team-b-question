# CS Games 2023 Team B Application

PLEASE FILL IN THE FOLLOWING!

## Full Name
John Rafael Diaz 

## UWindsor Email
diaz6@uwindsor.ca

## Application Form
- [x] I certify I have submitted the [application form](https://forms.office.com/r/R4A1JyB3Xf)

## Briefly explain how your solution works and how to run it 

The solutions works by getting asking the user how many days of stock prices they will enter then we will use that number as the size of the array of stock prices and create it; With that number, we will loop that many times and ask the user to input the stock price. They could input the stock price in the format (day1   day2   day3   day4........ dayn). 

There is a function named bestSell that receives an array (stock prices) and the size of the array. There's a loop that will loop based on the size of the array. minPrice is set to the first element of the array and keeps track of the minimum stock price and maxProfit is set to 0 and keeps track of maximum profit. Inside the loop it will compare the first element of the array to the minPrice, if it is smaller then minPrice will be set to that element. If not it will check if the element - minPrice is bigger than the maxProfit if it is then it will set element - minPrice as the maxProfit. After the first iteration it would now compare the 2nd element and after it would compare the 3rd element and so on. After the loop is done it would return the maximum profit. 

In the main function, after getting the array and the size from the user. The function bestSell will be called and be passed the array and the size. The return the value of the functin will be printed out.

To run the code there are multiple ways to do it
- Copy and paste the code on replit/languages/c then run 
- Compile the code using gcc or other compilers then run the file
- Copy paste the code in visual studio then run it (make sure to install c and other programs first to run the file)
