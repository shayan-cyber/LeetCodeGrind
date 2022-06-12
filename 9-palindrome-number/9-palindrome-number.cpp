class Solution {
public:
    long long int reverseInt(long long int x){
        long long int res =0;
        long long int rem = 0;
        int n = x;
        
        long long int temp = pow(2,31);
        
        while(n != 0){
            rem = n%10;
            n = n/10;
            res = res *10 + rem;
            
        }
        
        
        if(res < -temp || res> temp-1)
            return 0;
        return res;
    }
    
    bool isPalindrome(int x) {
        
        if(x<0)
            return false;
        if(x== reverseInt(x))
            return true;
        else{
            return false;
        }
        
        
        
    }
};