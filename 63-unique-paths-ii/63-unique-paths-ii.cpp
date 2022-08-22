class Solution {
public:
    
    
    vector<vector<int>> dp;
    bool isValid(int i, int j, int n, int m){
        
        if(i<0 || j<0 || i>=n || j>=m)
            return false;
        return true;
        
    }
    
    
    int solve(vector<vector<int>> & g, int i, int j, int n, int m){
        if(i == n-1 && j == m-1 && g[i][j] ==0)
            return 1;
        if(dp[i][j] != -1)
            return dp[i][j];
        int right=0;
        int left =0;
        
        if(isValid(i, j+1, n, m) && g[i][j+1] ==0)
            right = solve(g, i, j+1,n,m);
        if(isValid(i+1, j, n, m) && g[i+1][j] ==0)
            left = solve(g, i+1, j,n,m);
        
        return dp[i][j] = right+ left;
        
        
        
    }
    
    
    int uniquePathsWithObstacles(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();
        dp = vector<vector<int>> (101,vector<int> (101,-1));
        if(g[0][0] ==1)
            return 0;
        return solve(g, 0,0, n, m); 
        
        
    }
};