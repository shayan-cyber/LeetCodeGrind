class Solution {
public:
    
    vector<vector<int>> dp;
    
    int solve(string word1, string word2, int i, int j){
        
        
        if(i >= word1.length() && j >= word2.length())
            return 0;
        
        if(i >= word1.length()){
            return word2.length() -j;
        }
        if(j >= word2.length()){
            return word1.length() - i;
        }
        
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(word1[i] == word2[j]){
            return dp[i][j] = solve(word1, word2, i+1, j+1);
        }else{
            return dp[i][j] =  1 + min(solve(word1, word2, i+1, j), solve(word1, word2, i, j+1));
        }
        
    }
    
    
    int minDistance(string word1, string word2) {
        dp = vector<vector<int>> (word1.length()+1, vector<int>(word2.length()+1, -1));
        return solve(word1,word2, 0, 0);
        
    }
};