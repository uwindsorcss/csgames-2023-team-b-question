#include <stdio.h>

int bestSell(int stocks[], int size);

int main(void) {
  int size;
  printf("How many days of stock price would you input?: ");
  scanf("%d", &size);
  int stocks[size];

  
  for (int i = 0; i < size; i++) {
    scanf("%d", &stocks[i]);
  }

  
  printf("%d", bestSell(stocks, size));
}

int bestSell(int stocks[], int size) {
  int maxProfit = 0;
  int minPrice = stocks[0];
  int pos = 0;

  for (int i = 0; i < size; i++) {
    pos = stocks[i];
    if (pos < minPrice) {
      minPrice = pos;
    } else if (pos - minPrice > maxProfit) {
      maxProfit = pos - minPrice;
    }
  }
  return maxProfit;
}