class Solution {
public:
    int res = INT_MAX;
    vector<vector<int>> dp;
    int solve(vector<vector<int>> &m, int i, int j, int curr){
        
        if(i<0 || i >= m.size() || j<0 || j>= m[0].size())
            return INT_MAX;
        if(i==m.size()-1)
            return m[i][j];
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int temp1 =  solve(m, i+1, j-1, curr+ m[i][j]) ;
        int temp2 = solve(m, i+1, j,  curr+ m[i][j]);
        int temp3 = solve(m, i+1, j+1,  curr+ m[i][j]);
        
        int ans = min(temp1,temp2);
        ans = min(temp3, ans) + m[i][j];
        
        return dp[i][j] =  ans;
        
    }
    
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        dp = vector<vector<int>> (101,vector<int>(101,-1) );
        
        int t = INT_MAX;
        for(int i=0; i<matrix[0].size(); i++){
             t = min(t,solve(matrix, 0, i, 0));
        }
        
        return t;
    }
};