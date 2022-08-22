class Solution {
public:
    
    
    
    vector<vector<string>> res;
    vector<string> path;
    bool ispalindrome(string s, int start, int end){
        
       while(start <= end){
           if(s[start] != s[end]){
               return false;
           }else{
               start++;
               end--;
           }
       }
        return true;
        
    }
    
    void solve(int i, string s){
        if(i == s.length())
        {
           res.push_back(path);
           return ;
        }
        
        for(int k = i; k<s.size(); k++){
            
            
            if(ispalindrome(s, i, k)){
                path.push_back(s.substr(i, k-i+1));
                solve(k+1, s);
                path.pop_back();
            }
            
        }
        
        
            
        
        
        
        
    }
    
    
    vector<vector<string>> partition(string s) {
        
        solve(0, s);
        return res;
        
    }
};