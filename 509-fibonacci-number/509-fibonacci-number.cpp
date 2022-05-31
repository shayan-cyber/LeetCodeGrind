class Solution {
public:
//     using normal recursion
//     int Solve(int n){
//         if(n == 0)
//             return 0;
//         if(n==1)
//             return 1;
//         return Solve(n-1) + Solve(n-2);
//     }
    
    
//     using 1D dp 
    
    int dp[31]={0};
    int Solve(int n){
        if(n<=1){
            return n;
        }
        
        if(dp[n])
            return dp[n];
        
        return dp[n] = Solve(n-1) + Solve(n-2);
    }
    
    
    
    int fib(int n) {
        
        return Solve(n);
        
    }
};