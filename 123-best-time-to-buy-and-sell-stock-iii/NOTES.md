Approach:
First we'll do the first transaction with maximum profit(similar to  Best Time to Buy and Sell Stock I) .
then we'll do the second transaction also with maximum profit but this time min_price that we bought the stock will be effective price after the profit of first transaction i.e min(prices[i] - profit1,min_price2).