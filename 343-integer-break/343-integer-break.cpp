class Solution {
public:
    
    // memeset(-1, dp.size())
    int help(int n, vector<int> &dp){
        if(n==1|| n==0)
            return 1;
     
        int maxi = 0;
        
        
        if(dp[n]!= -1)
            return dp[n];
        
        
        for(int i=1; i<n; i++){
            maxi = max(maxi, max(i*help(n-i,dp), i*(n-i)));
        }
        
        return dp[n]=maxi;
    }
    
    int integerBreak(int n) {
        vector<int> dp(60,-1);
        // memset(dp,-1,60);
   
        return help(n,dp);
        
        
    }
};