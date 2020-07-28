// Given an array where each element represents the stock price on a given day, find the max profit that can be earned by buying and selling
// stock only once. Effectively we need to find the max a[j] - a[i] where j>i.
// MAX DIFFERENCE BETWEEN TWO ELEMENTS

int maxProfit(int prices[], int n){
    int max_profit = 0;
    int min_price = INT_MIN;

    for (int i=0;i<n;i++){
        if(prices[i]<min_price)
        min_price = prices[i];
        else if(prices[i]-min_price > max_profit)
        max_profit = prices[i] - min_price;
    }
    return max_profit;
}

