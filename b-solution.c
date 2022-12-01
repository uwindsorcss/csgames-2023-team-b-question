#include <stdio.h>

int main(void) {

    int num;
    int array[100] = {0};
    int values = 0;
    int number_registered = 0;
    char c;
    
    //Get my integer array
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

    //Figure out the maximum profit
    int buy = array[0];
    int profit = 0;
    int temp_profit;

    for(int i = 1; i < values; i++) {
        if(array[i] > buy) {

            for(int j = i; j < values; j++) {
                temp_profit = array[j] - buy;
                if(temp_profit > profit) {
                    profit = temp_profit;
                }
            }

        } else {
            buy = array[i];
        }
    }

    //Print results
    printf("%d", profit);
    
    return 0;

}