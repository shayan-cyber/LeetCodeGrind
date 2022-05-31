class Solution {
public:
    
    int Solve(int n){
        if(n == 0)
            return 0;
        if(n==1)
            return 1;
        return Solve(n-1) + Solve(n-2);
    }
    
    int fib(int n) {
        
        return Solve(n);
        
    }
};