class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int max_profit =0;
        int least_price = INT_MAX;
        for(int i=0; i<n; i++){
            max_profit = max(prices[i] - least_price, max_profit);
            
            least_price = min(least_price, prices[i]);
        }
        
        return max_profit;
        
    }
};