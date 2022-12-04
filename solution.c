#include <stdio.h>
int findMin (int arr[], int n);
int find_Max_Profit(int array[], int n);

int max_p=0, min_p, max_v, min_v, max_profit=0;
/* max_p store the position of max num in the array
max_v store the value of max num in the array
min_p store the position of min num in the array
min_v store the value of min num in the array
*/


int main() {
  int n;// n is the number of element
  printf("How many numbers do you want to enter?\n");
  scanf("%d", &n);
  int array[n];
  for (int i=0; i<n; i++){
    printf("Enter your element:\n");
    scanf(" %d", &array[i]);
  }
  // assume last element in the array is the max number in the array, and store it's potision
  max_v=array[n-1];
  max_p=n-1;
  printf("\nresult is %d\n",find_Max_Profit(array, n));

  for (int z=0; z<max_p; z++){
    if (min_v==array[z] && z+1<max_p){
      min_p=z+1;
      break;
    }
  }
  
  printf("Description: Buy on day %d (price = %d) and sell on day %d (price = %d), profit = %d-%d = %d. ",min_p,min_v,max_p,max_v,max_v,min_v,max_profit);
  
}

int find_Max_Profit(int array[], int n){
  for (int i=n-1; i>0; i--){
    if ((array[i]-findMin(array, i-1))>max_profit){
      max_profit=array[i]-findMin(array, i-1);
      max_p=i+1;
      max_v=array[i];
      min_v=findMin(array, i-1);
    }
  }
  return max_p;
}

// find the minimum value in the given range n in the array
int findMin (int arr[], int n){
  int i, min=arr[n];
  for (int k=n-1; k>=0; k--){
    if (arr[k]<min){
      min=arr[k];
    }
  }
  return min;
  }
  

