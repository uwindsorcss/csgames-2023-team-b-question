#include <stdio.h>
#include <stdlib.h>


void arraySwitch(int array[], int size); // Used to move the num'th item to the back of the array: array[], with size: size.

void arraySwitch(int array[], int size) {

     for (int i = 0; i < size; i++) {
        
        array[i] = array[i + 1];

    }
}

int main(void)
{

    int stocks[160]; // The array we are using. - Max 160 Characters, 10 Chr Buffer.

    int i = 0;
    char stockChar;

    int maxProfit; // The maximum profit able to be obtained (Our output)

    int max = 0;
    int buyIndex, sellIndex;

    int noProfitVal = 0;
    int gotProfitVal = 0;

    int additive = 1;

    printf("Please enter an array of numbers: ");

    do {

        scanf("%d%c", &stocks[i], &stockChar); // Scans the input as both a integer (the actual number) and a character. Used to determine when to stop.
        i++;                                   // Increase the index.
    }

    while (stockChar != '\n' && i <= 150); // Stops accepting inputs once the new line character is found, or the user has exceeded 150 elements.


    if (i >= 150) { // If recieved more than 149 elements. 
        printf("Too many elements were recieved. Please only enter 149 elements or less.");
        exit(0); // Exits the code.
    }


    int ARR_LEN = i;         // This will set out length to how many inputs were accepted.
    int TminVal = stocks[0]; // The total Minimum Value
    int TmaxVal = stocks[0]; // The totla Maximum Value
    int TmaxIndex = 0;       // The index for the maximum value
    int TminIndex = 0;       // The index for the minimum value.

    while (1 == 1) { // A continuous loop, used to repeat the maximum and minimum variable calculation multiple times to reduce the iteration count.

        for (int i = 1; i < ARR_LEN; i++) { // Iterates through the array - getting us the maximum and minimum values and index's.

            if (stocks[i] < TminVal) {// Minimum
            
                TminVal = stocks[i];
                TminIndex = i;
            }

            if (stocks[i] > TmaxVal){ // Maximum.

                TmaxVal = stocks[i];
                TmaxIndex = i;
            }
        }

        maxProfit = TmaxVal - TminVal; // Sets the most profit that is able to be obtained.

        if (TminIndex < TmaxIndex) { // If the max profit is plausible, break our code and output that. (Plausible if the min val is before the max value).

            printf("Maximum Profits: %d. Buy Day %d, Sell Day %d\n", maxProfit, TminIndex + additive, TmaxIndex + additive);
            exit(0);
        }

        if (TminIndex == TmaxIndex) { // If the all values are equal - no profit is able to be obtained. Thus break and show that.

            printf("No profits are able to be obtained.\n");
            exit(0);
        }

        if (TminIndex == ARR_LEN - 1) {// If the minimum value is last in the array, we can simply remove it, as it can not be a possible option to make profit - since max needs to be after minimum.
        
            ARR_LEN--;
        }

        if (TmaxIndex == 0)  { // If the maximum value is first, we can remove it for the above reasons.
       
            arraySwitch(stocks, ARR_LEN); // Moves to the back of the array
            ARR_LEN--;                       // Reduces array size.

            additive++; // This is used to show the proper day to buy and sell.
        }

        if (TmaxIndex != 0 && TminIndex != ARR_LEN - 1){ // If none of the checks are true, we can break and continue our code.

            break;
        }

        // Resetting our variables for the next iteration.

        TminVal = stocks[0];
        TmaxVal = stocks[0];
        TminIndex = 0;
        TmaxIndex = 0;
    }

    // Now we find the max value.

    /*
    This for loop will iterate through the array,
    taking the i'th element, and finding the max element after that.
    This will now be our baseline. By checking what our maximum value - our new found profit is , this gives us a number (LimitVal) that for any profit greater, the i'th element must be less than
    since we know we cant go higher than the maximuim value, and we need to make more than our profit. Thus, we can skip any number that is not less than the limitVal.
    */
    for (int i = 0; i < ARR_LEN; i++) {

        if (i > 0) { // Checks if the the number is under the limit - can't be checked on first iteration so we skip it.

            int limitVal = TmaxVal - max;

            if (!(stocks[i] < limitVal)) { // If it is, skip the number.

                continue;
            }
        }

        for (int j = i; j < ARR_LEN; j++) { // Takes the current element, and finds the next biggest element after it.

            if (stocks[j] <= stocks[i]){ // If the next element is less than or equal to our initial element, we check the next.

                continue;
            }

            if (stocks[j] - stocks[i] > max) { // if the values are greater than our previous profit value, set it as the profit values.

                max = stocks[j] - stocks[i];
                buyIndex = i;
                sellIndex = j;
            }

            if (max == maxProfit){ // If this profit is the maximum profit possible, we can break the loop and print it.
            
                printf("Maximum Profits: %d. Buy Day %d, Sell Day %d\n", max, buyIndex + additive, sellIndex + additive);
                exit(0);
            }
        }
    }

    if (max > 0) { // If we have found a maximum value, we can print it.
        
        printf("Maximum Profits: %d. Buy Day %d, Sell Day %d\n", max, buyIndex + additive, sellIndex + additive);
    }

    

    return 0;
}
