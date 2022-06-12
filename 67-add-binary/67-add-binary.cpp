class Solution {
public:
    string addBinary(string a, string b) {
        
        int n = a.length();
        int m = b.length();
        int carry  =0;
        
        string res="";
        while(n>=0 ||  m>=0){
            
            int sum = carry;
            if(n>=0){
                sum = sum + a[n]-'0';
                n--;
            } 
            if(m>=0){
                sum = sum + b[m]-'0';
                m--;
            }
            
            if(sum ==3){
                res = res + "1";
                carry = 1;
            }else if(sum==2){
                res = res + "0";
                carry =1;
            }else if(sum == 1){
                res = res +"1";
                carry =0;
            }else if(sum ==0){
                res = res + "0";
                carry = 0;
            }
        }
        
        if(carry >0){
            res = res + to_string(carry);
        }
        reverse(res.begin(), res.end());
        return res;
        
    }
};