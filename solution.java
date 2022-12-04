import java.util.Scanner;

public class solution {
    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
        int[] price = new int[6];
        int profit = 0;
        int currentProfit;
        
        for (int i = 0; i < price.length; i++) {
            price[i] = scnr.nextInt();
        }

        scnr.close();

        int min = price[0];

        for (int i = 1; i < price.length; i++) {
            if (price[i] < min) {
                min = price[i];
                continue;
            }
            currentProfit = price[i] - min;
            if (profit < currentProfit) profit = currentProfit;
        }

        System.out.println("Output: " + profit);
    }
}