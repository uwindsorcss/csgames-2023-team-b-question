import java.util.Scanner;

public class solution{
    public static void main(String[]args){
        Scanner scnr = new Scanner(System.in);
        String[] input;
        int[] stocks;

        while (true){
            input = scnr.nextLine().split(" ");
            if (input[0].equals("-1"))
                return;

            stocks = new int[input.length];
            for (int i=0; i<input.length; i++)
                stocks[i] = Integer.parseInt(input[i]);

            System.out.println(maxProfit(stocks));
        }
    }

    public static int maxProfit(int[] stocks) {
        int maxProfit = 0, minSoFar = stocks[0];

        for (int price : stocks){
            minSoFar = Math.min(minSoFar, price);
            maxProfit = Math.max(maxProfit, price - minSoFar);
        }

        return maxProfit;
    }
}