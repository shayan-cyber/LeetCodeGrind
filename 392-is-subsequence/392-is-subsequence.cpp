class Solution {
public:
    int countSubSeq(string &s, string &t, int i, int j,  vector<vector<int>> &dp){
        
        if(i== 0 || j==0){
            return 0;
        }
        
        if(dp[i][j]!= -1){
            return dp[i][j];
        }
        if(s[i-1] == t[j-1]){
            return dp[i][j] = 1 +  countSubSeq(s, t, i-1, j-1, dp);
        }else{
            return dp[i][j] =  countSubSeq(s, t, i,j-1,dp);
        }
        
        
    }
    
    
    bool isSubsequence(string s, string t) {
        
//         naive approach
        
        
//         int n = s.length();
//         int m = t.length();
//         if(n==0)
//             return true;
//         if(m==0)
//             return false;
        
//         int k =0;
//         int i=0;
//         bool flag ;
//         for(i=0; i<n; i++){
//             flag = false;
//             for(int j =k; j<m; j++){
                
//                 if(s[i]== t[j]){
//                     k= j+1;
//                     flag = true;
//                     break;
                    
//                 }
                
//             }
            
//             if(flag== false)
//                 return false;
            
//         }
        
        
//         if(i==n){
//             return true;
//         }
        
//         return false;
        
//         using count subsequence(dp)
        
        int n = s.length();
        int m = t.length();
        
        vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
        
        if(countSubSeq(s,t, n,m, dp) == n)
            return true;
        return false;
        
        
        
        
    }
};