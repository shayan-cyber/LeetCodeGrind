class Solution {
public:
    
    vector <int> dp;
    int help(int s){
        if(s==0)
            return dp[0] =0;
        if(s==1)
            return dp[1] =1;
        if(s==2)
            return dp[2] =1;
        if(dp[s] != -1)
            return dp[s];
        return dp[s] = help(s-2) + help(s-1) + help(s-3);
        
    }
    
    
    
    
    int tribonacci(int n) {
        
        
        dp = vector <int> (n+1, -1);
        
        return help(n);
    }
};