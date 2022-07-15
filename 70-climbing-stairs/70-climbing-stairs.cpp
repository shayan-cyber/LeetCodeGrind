class Solution {
public:
    vector <int> dp;
    
    int solve(int s, int d){
        
        if(s == d)
            return 1;
        if(d-s >= 2) {
            
            int t1;
            int t2;
            if(dp[s+1] != -1 && dp[s+2] != -1){
                t1 = dp[s+1];
                t2 = dp[s+2];
            }else if(dp[s+1] != -1){
                t1 = dp[s+1];
                t2 = solve(s+2, d);
                dp[s+2] = t2;
                
            }else if(dp[s+2] != -1){
                t2 = dp[s+2];
                t1 = solve(s+1,d);
                dp[s+1] = t1;
            }else{
                
                t1 = solve(s+1,d);
                t2= solve(s+2, d);
                dp[s+1] = t1;
                dp[s+2]= t2;
            }
            
            
            return t1+t2;
        }else{
            if(dp[s+1] != -1)
            return dp[s+1];
            else{
               return  dp[s+1] =  solve (s+1, d);
            }
        }
        
    }
    
    
    
    int climbStairs(int n) {
        
        dp = vector <int> (46,-1);
        return solve(0, n);
    }
};