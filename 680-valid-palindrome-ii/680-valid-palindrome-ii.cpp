// class Solution {
// public:
//     bool validPalindrome(string s) {
        
//         int n = s.length();
//         bool deleted = false;
        
//         int i =0; 
//         int j = n-1;
        
//         while(i<n/2 && j>n/2){
//             if(s[i] != s[j] && deleted){
//                 return false;
//             }
//             else if(s[i] != s[j] && !deleted){
//                 deleted = true;
//                 if(s[i+1] != s[j] && s[i] != s[j-1])
//                     return false;
//                 if(s[i+1]== s[j])
//                     i++;
//                 else if(s[i] == s[j-1])
//                     j--;
//             } 
            
//             i++;
//             j--;
//         }
        
        
//         return true;
        
//     }
// };

class Solution {
public:
    
    bool isPalindrome(string s, int i, int j){
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
    bool validPalindrome(string s) {
        
        int n = s.length();
        bool deleted = false;
        
        int i =0; 
        int j = n-1;
        
        while(i<j){
            
            if(s[i] == s[j]){
                i++;
                j--;
            }else{
                return isPalindrome(s, i+1, j) || isPalindrome(s,i, j-1);
            }
            
            
        }
        
        
        return true;
        
    }
};