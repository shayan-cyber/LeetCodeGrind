class Solution {
public:
    
    vector <vector<int>> dp;
    
    
    int solve(vector<vector<int>> &t,int i, int j, int n){
        if(i >= n || j > i){
            
            return INT_MAX;
        }
        
        if(i == n-1 && j <= i){
            return t[i][j];
        }
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        
        
        return dp[i][j] =  min(solve(t, i+1, j,n), solve(t, i+1, j+1, n)) + t[i][j];
        
    }
    
    
    int minimumTotal(vector<vector<int>>& t) {
        
        
        dp = vector<vector<int>> (201, vector<int>(201, -1));
        return solve(t, 0, 0, t.size());
    }
};