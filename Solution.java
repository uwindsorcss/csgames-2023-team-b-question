import java.util.Arrays;

public class Solution {

    public static int maxProfit(int[] prices) {
        if (prices == null || prices.length == 0)
            return 0;
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.length; i++) {
            minPrice = Math.min(minPrice, prices[i]);
            maxProfit = Math.max(maxProfit, prices[i] - minPrice);
        }

        return maxProfit;
    }

    public static void main(String[] args) {
        // Example 1
        int[] E1Prices = { 7, 1, 5, 3, 6, 4 };
        System.out.println("Example 1:");
        System.out.println("Input: " + Arrays.toString(E1Prices));
        System.out.println("Expected Output: 5");
        System.out.println("Output: " + maxProfit(E1Prices));

        // Example 2
        int[] E2Prices = { 7, 6, 4, 3, 1 };
        System.out.println("\nExample 2:");
        System.out.println("Input: " + Arrays.toString(E2Prices));
        System.out.println("Expected Output: 0");
        System.out.println("Output: " + maxProfit(E2Prices));

        // Example 3
        int[] E3Prices = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
        System.out.println("\nExample 3:");
        System.out.println("Input: " + Arrays.toString(E3Prices));
        System.out.println("Expected Output: 4");
        System.out.println("Output: " + maxProfit(E3Prices));

        // Example 4
        int[] E4Prices = { 2, 1, 2, 1, 0, 1, 2 };
        System.out.println("\nExample 4:");
        System.out.println("Input: " + Arrays.toString(E4Prices));
        System.out.println("Expected Output: 2");
        System.out.println("Output: " + maxProfit(E4Prices));

        // Example 5
        int[] E5Prices = { 3, 3, 3, 3, 3, 3 };
        System.out.println("\nExample 5:");
        System.out.println("Input: " + Arrays.toString(E5Prices));
        System.out.println("Expected Output: 0");
        System.out.println("Output: " + maxProfit(E5Prices));
    }
}