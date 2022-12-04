import java.util.Scanner;

public class solution {
    
    public static int maxProfit(int[] price) {
        int profit = 0;
        int currentProfit;
        int min = price[0];

        for (int day = 1; day < price.length; day++) {
            if (price[day] < min) {
                min = price[day];
                continue;
            }
            currentProfit = price[day] - min;
            if (profit < currentProfit) profit = currentProfit;
        }

        return profit;
    }
    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
        int[] price = new int[6];
        
        for (int i = 0; i < price.length; i++) {
            price[i] = scnr.nextInt();
        }

        scnr.close();

        System.out.println("Output: " + maxProfit(price));
    }
}