class Solution {
public:
    
    vector<vector<int>> dp;
    int solve(vector<int> &p, int fee, int i, bool buy){
        
        if(i >= p.size())
            return 0;
        if(dp[i][buy] != -1)
            return dp[i][buy];
        if(buy){
            
            return dp[i][buy] = max(p[i] + solve(p, fee, i+1, false)-fee, solve(p,fee, i+1, true));
            
            
            
        }else{
            
            
            return   dp[i][buy] = max(-p[i] + solve(p, fee, i+1, true) ,solve(p, fee, i+1, false) );
            
        }
        
        
    }
    
    
    
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        dp = vector<vector<int>> (n+1, vector<int> (2,-1));
        return solve(prices,fee, 0, false );
    }
};