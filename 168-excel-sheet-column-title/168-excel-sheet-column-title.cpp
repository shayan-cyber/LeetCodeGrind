class Solution {
public:
    
    string getChar(int n){
        
        int x= (int)'A';
        char a=char(n+x-1); //ascii value of a
        string ans = "";
        ans= ans+a;
        return ans;
        
    }
    
    string convertToTitle(int columnNumber) {
        
        if(columnNumber<=26){
            return getChar(columnNumber);
        }
        
        
        int temp = columnNumber;
        
        string result ="";
        
        while(temp){
            int re = temp%26;
            if(re==0)
                re =26;
            result = result + getChar(re);
            //we are doing this cause we are considering 26 as remainder when re ==0
            temp = (temp-re) /26;
            
        }
        
       
        reverse(result.begin(), result.end());
        return result;
    }
};