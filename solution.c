
#include <stdio.h>

void bestBuy(int list[], int length){
    int output[5];
    output[0] = 0;
    int diff = 0;
    int buy;
    int sell;
    int buyDay;
    int sellDay;
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            if (list[i] < list[j]){
                if (i < j){
                    diff = list[j] - list[i];
                }
            }
            if (diff > output[0]){
                output[0] = diff;
                output[1] = list[i];
                output[2] = list[j];
                output[3] = i+1;
                output[4] = j+1;
                
            }
        }
    }
    
    if (output[0] == 0){
        printf("NO transaction exists");
    }
    else{
        printf("Profit : %d\nDay of buy : %d (Price : %d)\nDay of sell : %d (Price : %d)\n", output[0], output[3], output[1], output[4], output[2]);
    }
}

int main(){
  int length;
  
  printf("Enter number of days : ");
  scanf("%d", &length);
  int arr[length];
  
  for (int i = 0; i < length; i++){
      printf("Enter day %d price :", i+1);
      scanf("%d", &arr[i]);
  }
  bestBuy(arr,length);
  
  
  return 0;

}
