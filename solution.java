import java.util.Scanner;
import java.lang.Math;

public class solution {
	
    public static int maxProfit(int[] arr) {
        int size = arr.length;
        int buy = arr[0];
        int profit = 0;
        
        for (int i = 0; i < size; i++){
            // find lowest price
            if (arr[i] < buy){
                buy = arr[i];
            }
            
            // find biggest profit margin
            if (arr[i] - buy > profit){
                profit = arr[i] - buy;
            }
        }
        
        return(profit);
    }

	public static void main(String[] args) {
		
		Scanner scnr = new Scanner(System.in);
		
		// case 1: case from question
		int arr[] = {7, 1, 5, 3, 6, 4};
		System.out.println("Case 1: " + maxProfit(arr));
		
		System.out.println("");
		System.out.println("Please enter 7 numbers");
		int arr1[] = new int[7];
		for (int i = 0; i < 7; i++) {
			arr1[i] = scnr.nextInt();
		}
		
		System.out.println("Case 2 (Your case): " + maxProfit(arr1));.l,km
		
		
	}

}
