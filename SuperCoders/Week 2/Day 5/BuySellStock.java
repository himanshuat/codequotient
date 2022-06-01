class Result {
    static int findMaxProfit(int[] prices) {
        int min = Integer.MAX_VALUE;
        int maxprofit = 0;
        for (int i = 0; i < prices.length; ++i) {
            if (prices[i] < min) {
                min = prices[i];
            }
            if (maxprofit < prices[i] - min) {
                maxprofit = prices[i] - min;
            }
        }
        return maxprofit;
    }
}