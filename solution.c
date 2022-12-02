
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

void arraySwitch(int array[], int size, int num); // Used to move the num'th item to the back of the array: array[], with size: size.

void arraySwitch(int array[], int size, int num) 
{

    for (int i = num; i < size - 1; i++)
    {
        int tempVal = array[i];
        array[i] = array[i + 1];
        array[i + 1] = tempVal;

       
    }
}

int main(void){

    int stocks[100]; // The array we are using.

    int i = 0;
    char stockChar; 
   
 
    int maxProfit; // The maximum profit able to be obtained (Our output)
   
    int max = 0;
    int buyIndex;
    int sellIndex;

    int noProfitVal = 0;
    int gotProfitVal = 0;

    int additive = 1;

    printf("Please enter an array of numbers: "); 
    
    do{

        scanf("%d%c", &stocks[i], &stockChar); // Scans the input as both a integer (the actual number) and a character. Used to determine when to stop. 
        i++; // Increase the index. 
    }


    while (stockChar != '\n'); // Continue to scan the integers as long as the character we scanned isnt a new line character.

    int ARR_LEN = i; // This will set out length to how many inputs were accepted. 
    int TminVal = stocks[0]; // The total Minimum Value
    int TmaxVal = stocks[0]; // The totla Maximum Value
    int TmaxIndex = 0; // The index for the maximum value
    int TminIndex = 0; // The index for the minimum value.

    while (1 == 1){ // A continuous loop, used to repeat the maximum and minimum variable calculation multiple times to reduce the iteration count. 
    

        for (int i = 1; i < ARR_LEN; i++){ // Iterates through the array - getting us the maximum and minimum values and index's.

            
            if (stocks[i] < TminVal) // Minimum
            {
                
                TminVal = stocks[i];
                TminIndex = i;
            }

            if (stocks[i] > TmaxVal) // Maximum.
            {
                
                TmaxVal = stocks[i];
                TmaxIndex = i;
            }
        }

        maxProfit = TmaxVal - TminVal; // Sets the most profit that is able to be obtained. 
        
        if (TminIndex < TmaxIndex){ // If the max profit is plausible, break our code and output that. (Plausible if the min val is before the max value).
           
            gotProfitVal = 1;
            break;
        }

        if (TminIndex == TmaxIndex){ // If the all values are equal - no profit is able to be obtained. Thus break and show that. 
            
            noProfitVal = 1;
            break;
        }

        if (TminIndex == ARR_LEN - 1) // If the minimum value is last in the array, we can simply remove it, as it can not be a possible option to make profit - since max needs to be after minimum.
        {
            ARR_LEN--;
        }

        if (TmaxIndex == 0) // If the maximum value is first, we can remove it for the above reasons. 
        {

            arraySwitch(stocks, ARR_LEN, 0); // Moves to the back of the array
            ARR_LEN--; // Reduces array size.

            additive++; // This is used to show the proper day to buy and sell.
        }

        if (TmaxIndex != 0 && TminIndex != ARR_LEN - 1) // If none of the checks are true, we can break and continue our code. 
        {
            break;
        }

        // Resetting our variables for the next iteration. 

        TminVal = stocks[0]; 
        TmaxVal = stocks[0];
        TminIndex = 0;
        TmaxIndex = 0;
    }
    
    if (noProfitVal == 1){ // If no profits are available 
        printf("No profits are able to be obtained.\n");
    }

    else if (gotProfitVal == 1){ // If the maximum profit is possible. 
    
        printf("Maximum Profits: %d. Buy Day %d, Sell Day %d\n", maxProfit, TminIndex + additive, TmaxIndex + additive);
    }

    else{ // If we dont have no profit and we dont have max profit - find the maximum possible profit. 


/*
This for loop will iterate through the array, 
taking the i'th element, and finding the max element after that.
This will now be our baseline. By checking what our maximum value - our new found profit is , this gives us a number (LimitVal) that for any profit greater, the i'th element must be less than
since we know we cant go higher than the maximuim value, and we need to make more than our profit. Thus, we can skip any number that is not less than the limitVal. 

*/
        for (int i = 0; i < ARR_LEN; i++){

            if (i > 0){ // Checks if the the number is under the limit - can't be checked on first iteration so we skip it. 
                
                int limitVal = TmaxVal - max;


                if (!(stocks[i] < limitVal))
                {
                   
                    
                    continue;
                }

            }

            for (int j = i; j < ARR_LEN; j++){ // Takes the current element, and finds the next biggest element after it. 

                
                if (stocks[j] <= stocks[i]) // If the next element is less than or equal to our initial element, we check the next.
                {

                    continue;
                }

                if (stocks[j] - stocks[i] > max){ // if the values are greater than our previous profit value, set it as the profit values.

                    max = stocks[j] - stocks[i];
                    buyIndex = i; 
                    sellIndex = j; 
                }

                if (max == maxProfit) // If this profit is the maximum profit possible, we can break the loop and print it. 
                {
                    break;
                }
            }

            if (max == maxProfit){ // Same thing as above comment, just breaks the loop again if max profit is our current profit. 
                
                break;
            }
        }

        if (max > 0){ // If we have found a maximum value, we can print it. 
                
            printf("Maximum Profits: %d. Buy Day %d, Sell Day %d\n", max, buyIndex + additive, sellIndex + additive);
        }
        else // If not, we output we have no maximum value.
        {

            printf("No profits are able to be obtained.\n");
        }
    }

   

    return 0;
}
