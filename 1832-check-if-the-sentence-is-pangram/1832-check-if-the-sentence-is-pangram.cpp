class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        int n = sentence.size();
        vector <bool> check(26, false);
        
        for(int i=0; i<n ; i++){
            
            check[sentence[i] - 'a'] = true;
            
        }
        
        
        for(int i=0; i<26; i++){
            if(check[i] == false)
                return false;
            
        }
        return true;
        
    }
};