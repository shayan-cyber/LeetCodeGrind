class Solution {
public:
    bool isPalidrome(string s, int i, int j){
        while(i<j){
            if(s[i]== s[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        
        return true;
    }
    
    string longestPalindrome(string s) {
        //first approach (correct but it'll give TLE cause there is unnecessary function call)
        
        // int count = 1;
        
//         int n = s.size();
//         int start =0;
//         int end =0;
        
//         for(int i=0; i<n; i++){
            
//             for(int j=i+1; j<n; j++){
//                 if(isPalidrome(s, i, j)){
//                     if(j-i+1>count){
//                         start = i;
//                         end = j;
//                         count = j-i+1;
//                     }
//                 }
                
                
                
//             }
//         }
        
//         string ans;
//         for(int i = start; i<=end; i++){
//             ans.push_back(s[i]);
//         }
//         return ans;
        
        
        int n= s.length();
        string ans= "";
        ans+=s[0];
        int count =1;
        
        for(int i=0; i<n; i++){
            
            int l = i;
            int r = i;
            while(l>=0 && r<n){
                if(s[l] == s[r]){
                    
                    if(r-l+1>count){
                        ans = s.substr(l,r-l+1);
                        count = r-l+1;
                    }
                    l--;
                    r++;
                }else{
                    break;
                }
            }
            
            
             l = i;
             r = i+1;
            while(l>=0 && r<n){
                if(s[l] == s[r]){
                    
                    if(r-l+1>count){
                        ans = s.substr(l,r-l+1);
                        count = r-l+1;
                    }
                    l--;
                    r++;
                }else{
                    break;
                }
                
            }
            
            
        }
        return ans;
        
        
        
        
        
        
        
        
        
        
    }
};