class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int i=0;
        int ans=0;
        while(i<n-1){
            if(prices[i]>= prices[i+1]){
                i++;
            }else{
                ans = ans + prices[i+1] - prices[i];
                i= i+1;
            }
        }
        return ans;
    }
};