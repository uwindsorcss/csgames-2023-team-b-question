import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class solution {
    public static int maxProfit(ArrayList<Integer> stocks) {
        int lowest = Integer.MAX_VALUE;
        int maxProfit = 0;
        int profit = 0;

        for (int i = 0; i < stocks.size(); i++) {
            if (stocks.get(i) < lowest) {
                lowest = stocks.get(i);
            }
            profit = stocks.get(i) - lowest;
            if (maxProfit < profit) {
                maxProfit = profit;
            }
        }

        return maxProfit;
    }

    public static void main(String[] args) throws IOException {
        ArrayList<Integer> stocks = new ArrayList<Integer>();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String[] rawInput;
        rawInput = br.readLine().split(" ");

        for (int i = 0; i < rawInput.length; i++) {
            stocks.add(Integer.parseInt(rawInput[i]));
        }

        System.out.println(maxProfit(stocks));
    }
}
