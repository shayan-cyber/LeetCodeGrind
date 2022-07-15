class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        
        int n = s.length();
        int m = t.length();
        if(n==0)
            return true;
        if(m==0)
            return false;
        
        int k =0;
        int i=0;
        bool flag ;
        for(i=0; i<n; i++){
            flag = false;
            for(int j =k; j<m; j++){
                
                if(s[i]== t[j]){
                    k= j+1;
                    flag = true;
                    break;
                    
                }
                
            }
            
            if(flag== false)
                return false;
            
        }
        
        
        if(i==n){
            return true;
        }
        
        return false;
        
        
    }
};