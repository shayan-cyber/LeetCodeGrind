class Solution {
public:
    
    
    vector<int> dp;
    
    int solve(int n){
        if(n == 2){
            return 1; 
        }
        if(n==3){
            return 2;
        }
        
        
        if(n == 1)
            return 1;
        
        
        if(dp[n] != -1)
            return dp[n];
        
        
        int temp =0;
        
        
        for(int j=1; j<n; j++){
            
            int temp2 = j*(n-j);
            int temp3 =  j*solve(n-j);
            int temp4 = max(temp2, temp3);
            temp = max(temp, temp4);
        }
        
        
        return dp[n] = temp;
        
        
        
        
        
    }
    
    
    
    
    int integerBreak(int n) {
        
        dp = vector<int> (60,-1);
      return   solve(n);
        
    }
};