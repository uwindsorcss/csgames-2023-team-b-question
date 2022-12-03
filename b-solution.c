#include <stdio.h>

int main(void) {

    int array[100] = {0};
    int values = 0;
    char c;
    
    //This is the quicker version that assumes no spaces anywhere except between numbers
    while((c = getchar()) != '\n') {
        if(c != ' ') {
            array[values] = array[values] * 10 + (int)c - 48;
        } else {
            values++;
        }
    }
    values++;

    /*This is the slower version that corrects for spaces in weird orders
    int number_registered = 0;
    
    while((c = getchar()) != '\n') {
        if(c != ' ') {
            array[values] = array[values] * 10 + (int)c - 48;
            number_registered = 1;
        } else if(number_registered){
            values++;
            number_registered = 0;
        }
    }
    if(number_registered) values++;
    */

    //Figure out the maximum profit
    int buy = array[0];
    int profit = 0;
    int temp_profit;

    //Set initial base buy value
    for(int j = 1; j < values; j++) {
        temp_profit = array[j] - buy;
        if(temp_profit > profit) {
            profit = temp_profit;
        }
    }

    //If a lower buy value is found in the list, search for a lower value
    for(int i = 1; i < values; i++) {
        if(array[i] < buy) {
            buy = array[i];
            for(int j = i; j < values; j++) {
                temp_profit = array[j] - buy;
                if(temp_profit > profit) {
                    profit = temp_profit;
                }
            }

        } 
    }

    //Print results
    printf("%d", profit);
    
    return 0;

}