#include <stdio.h>

int bestProfit(int * arr, int size)
{
    int leftMin = arr[0];
    int best = 0;
    int profit;

    for (int i = 0; i < (size-1); i++)
    {
        if (arr[i] < leftMin)
            leftMin = arr[i];
        if(leftMin < arr[i+1])
        {
            profit = arr[i+1]-leftMin;
            if (profit > best)
                best = profit;
        }
    }

    return best;
}

int main (void)
{
    int arr[6] = {1,11,4,3,1,10};
    printf("%d",bestProfit(arr, 6));
}