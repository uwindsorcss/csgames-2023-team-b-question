/******************************************************************************
CSS GAMES QUESTION B
Created by: Keagan Whiston
Date: 12/02/2022
*******************************************************************************/

#include <stdio.h>
// ALTERNATE SOULTION 
// profit_max_bruteforce(arr, n) takes in an array and n for size of the array
// and looks through to find the greatest difference between all values one at 
// a time.  This runs in O(N^2)
// requires n to be the size of the array

int profit_max_bruteforce(int arr[], int n){
    int max = 0;
    int pos = 0;
    for(int j = 0; j<n; j++){
        for(int i=j; i<n; i++){
            if((arr[i]-arr[pos]) > max) max = (arr[i]-arr[pos]);
        }
        pos++;
    }
    return max;
}

// MAIN SOULTION
// profit_max(arr, n) takes in an array and n for size of the array 
// it looks through the lowest element vs the greatest difference allowing
// it to run in O(N) time
// requires n to be the size of the array

int profit_max(int arr[], int n){
    int min = arr[0];
    int max = 0;
    for(int i=1;i<n;i++){
        if((arr[i] - min) > max) max = arr[i] - min;
        if(arr[i] < min) min = arr[i];
    }
    return max;
}

int main()
{
    int stocks[]={2,1,7,3,5,1,8};
    int stocks2[]={8,7,6,5,4,3,2};
    int stocks3[]={1,1};

    printf("max profit = %d \n",profit_max(stocks,7));
    printf("max profit = %d \n",profit_max(stocks2,7));
    printf("max profit = %d \n",profit_max(stocks3,2));


    return 0;
}
