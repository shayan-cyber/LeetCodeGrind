class Solution {
public:
    vector <int> dp;
    int help(int s, vector<int> &cost, int n){
       
        
        if(s>=n){
            return 0;
        }
        
        if(dp[s] != -1)
            return dp[s];
        
        return dp[s] = min(help(s+1, cost, n)+ cost[s], help(s+2,cost,n)+ cost[s]);
        
        
        
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        dp = vector<int> (n,-1);
        
        
        
        if(n>1){
            return min(help(0,cost,n), help(1, cost,n)); 
        }
        return help(0, cost,n);
        
        
        
    }
};