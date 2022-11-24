#include <stdio.h>

int maxProfit(int prices[], int len_price);

int main(void)
{
    int a[] = {7, 1, 5, 3, 6, 4};
    printf("%d\n", maxProfit(a, 6));

    int b[] = {7, 6, 4, 3, 1};
    printf("%d\n", maxProfit(b, 5));
}

int maxProfit(int prices[], int len_price)
{
    int profit = 0;
    int buy = prices[0];

    for (int i = 1; i < len_price; i++)
    {
        if (profit <= (prices[i] - buy))
        {
            profit = prices[i] - buy;
        }

        if (buy >= (prices[i]))
        {
            buy = prices[i];
        }
    }

    return profit;
}