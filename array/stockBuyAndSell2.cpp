// Given an array where each element represents the stock price on a given day, find the max profit that can be earned by buying and selling
// any number of times. On a particular you can either buy a stock or sell it.
// On a day, we can either buy, sell or skip.

// We can simply use the peak valley approach. we can directly keep on adding the difference between the consecutive numbers of the array 
// if the second number is larger than the first one, and at the end total sum we obtain will be the maximum profit. 


int maxProfit(int[] prices) {
        int maxprofit = 0;
        for (int i = 1; i < prices.length; i++) {
            if (prices[i] > prices[i - 1])
                maxprofit += prices[i] - prices[i - 1];
        }
        return maxprofit;
    }
