# Information

Thank you for taking this challenge! [CS Games](https://2023.csgames.org/) is an event that the [Computer Science Society](https://css.uwindsor.ca) sponsors annually. We send two teams of ten students (20 total) to compete in a series of competitions and have a great time. You are currently taking the challenge for our **Team B**, which is for the less experienced members. **By completing this challenge, you will only be considered for Team B**.

This year we're combining a technical question with the GitHub platform so that we know you have some basic git knowledge. A lot of the CS Games competitions require git knowledge to submit your solutions.

Your final submission must be **pushed to this repository** by **November 30th at 11:59pm.** Be sure to also complete the application form!

**NOTE - We will most likely be sending a Team B this year, however there is a very small chance that that will change depending on several circumstances such as registration numbers and competition rules **

# Grading

Your solutions will be tested with many test cases. We will look at algorithm correctness against these test cases as well as time complexity when assessing your solution.

# Submitting

Push your solutions to this repository on the master branch. You may use any programming language of your choosing. Please save the file that we should run as a file named `solution` (e.g. `solution.py`, `solution.c`).


# Question

Given an array where the `i`th element is the price of some random stock on day `i`, determine the best transaction you can complete (i.e. buying one share and then selling it).

Note that you cannot sell a stock before you buy one.

### Input:
1) `stocks` - Array of integers
Assume inputs are separated by spaces and new lines. For team B it will look like :
```
7 1 5 3 6 4
```

### Output:
Integer value representing the maximum amount of profit to be made from the list of stock prices. Your function should return this value.

### Example:
**Example 1**

Input: ```[7,1,5,3,6,4]```

Output: 5

Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
             Not 7-1 = 6, as you cannot sell before you buy.


**Example 2**

Input: ```[7,6,4,3,1]```

Output: 0

Explanation: In this case, no transaction is done, i.e. max profit = 0.

