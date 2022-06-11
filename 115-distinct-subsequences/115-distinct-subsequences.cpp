class Solution {
public:
//     int solve(string x, string y, int m, int n){
//         if(n==0){
//             return 1;
//         }
//         if(m==0){
//             return 0;
//         }
        
//         if(x[m-1] == y[n-1])
//             return solve(x,y,m-1, n-1) + solve(x,y, m-1, n);
//         else{
//             return solve(x,y,m-1,n) ;
//         }
//     }
    
    
    int numDistinct(string s, string t) {
        
        // return solve(s,t, s.length(), t.length());
        int m = s.length();
        int n = t.length();
        vector <vector<double>> dp(m+1, vector<double>(n+1, 0));
        
        
        
        
        for(int i=0; i<m+1; i++){
            dp[i][0] =1;
        }
        
        
        
        for(int i=1; i<m+1; i++){
            
            
            for(int j=1; j<n+1; j++){
                
                if(s[i-1] == t[j-1]){
                    dp[i][j]= dp[i-1][j-1] + dp[i-1][j];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
                
            }
        }
        
        
        return dp[m][n];
        
         
        
        
        
    }
};