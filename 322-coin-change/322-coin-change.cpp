class Solution {
public:
    
    vector<vector<int>> dp;
    
    long long int solve(vector<int> & c, int amount, long long int curr, int i){
        
        if(i >= c.size())
            return INT_MAX;
        if(curr == amount)
            return 0;
        if(curr > amount)
            return INT_MAX;
        if(dp[i][curr] != -1)
            return dp[i][curr];
        if(c[i] > amount){
             return dp[i][curr] =   solve(c, amount, curr, i+1);
        }
         return  dp[i][curr] =   min(1 + solve(c, amount, curr + c[i], i), solve(c, amount, curr, i+1));
       
        
        
    }
    
    
    int coinChange(vector<int>& coins, int amount) {
        dp = vector<vector<int>> (12, vector<int> (1e4+1, -1));
        long long int t = solve(coins, amount,0,0);
        if(t>= INT_MAX)
            return -1;
        return t;
    }
};