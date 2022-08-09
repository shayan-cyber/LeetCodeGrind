class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        
        
        int maxPrice = INT_MIN;
        int minPrice = INT_MAX;
        
        
        int res =0;
        
        for(int i=0; i<n; i++){
            res = max(res, prices[i] - minPrice);
            minPrice = min(minPrice, prices[i]);
            // maxPrice = max(maxPrice, prices[i]);
            
            
            // maxPrice = 
            
        }
        
        return res;
        
        
        
    }
};