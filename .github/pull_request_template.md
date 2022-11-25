# CS Games 2023 Team B Application

PLEASE FILL IN THE FOLLOWING!

## Full Name
Tanzim Hossain

## UWindsor Email
hossai85@uwindsor.ca

## Application Form
- [x] I certify I have submitted the [application form](https://forms.office.com/r/R4A1JyB3Xf)

## Briefly explain how your solution works and how to run it 

maxProfit() iterates over the input list once. For each price in the list, it updates minSoFar to keep track of the lowest price so far and calculates the maximum profit that can be made from selling the stock at the current price, which occurs when the stock was bought at minSoFar. It returns the maximum of these profits, which is the solution to the problem.

To run this program, run main and input prices separated by spaces, with a newline to indicate the end of a stock. Enter -1 as the first price of a stock to exit. The main function creates an array from the input, passes it to maxProfit(), and prints the result.
