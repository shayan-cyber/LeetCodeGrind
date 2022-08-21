class Solution {
public:
    
    vector <vector<int>> dp;
    
    bool isvalid(int i, int j, int n, int m){
        
        if(i >= n || i<0 || j>=m || j<0)
            return false;
        return true;
        
    }
    
    int solve(vector<vector<int>> & g, int i, int j, int n, int m){
        
        
        if(!isvalid(i, j,n, m )){
            return INT_MAX;
        }
        
        if(i == n-1 && j == m-1){
            return g[i][j];
        }
        if(dp[i][i] != -1)
            return dp[i][j];
        
        int temp1;
        if(dp[i+1][j] != -1){
            temp1 = dp[i+1][j];
        }else{
            temp1 = solve(g, i+1, j, n,m );
        }
        
        int temp2 ;
        
        if(dp[i][j+1] != -1){
            temp2= dp[i][j+1];
        }else{
            temp2= solve(g, i, j+1, n, m);
        }
        return dp[i][j] = min(temp1 , temp2) + g[i][j];
        
        
        
        
        
        
        
    }
    
    
    int minPathSum(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        dp = vector <vector<int>> (300, vector<int>(300, -1));
        
        return solve(grid,0, 0,n,m );
        
        
        
        
    }
};