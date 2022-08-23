class Solution {
public:
    vector<vector<int>> dp;
    
    
    int lcs(string &s, string &r, int i, int j){
        
        if(i >= s.length() || j >= r.length())
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(s[i] == r[j]){
            return dp[i][j]  = 1 + lcs(s, r, i+1, j+1);
        }else{
            return dp[i][j] = max(lcs(s,r, i+1, j), lcs(s,r, i, j+1));
            
            
        }
        
        
        
        
        
    }
    
    
    int longestPalindromeSubseq(string s) {
        
        
        dp = vector<vector<int>> (s.length(),vector<int>(s.length(),-1));
        
        string r = s;
        reverse(s.begin(), s.end());
        
        return lcs(s, r, 0,0);
    }
};