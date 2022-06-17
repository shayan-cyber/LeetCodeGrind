unordered_map<char, string> L({{'2',"abc"},{'3',"def"},{'4',"ghi"},
    {'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}});
class Solution {
public:
    
    
    
   void helper(string digits, int i, string combi, vector<string> &ans){
        
        if(digits.length() == i){
            ans.push_back(combi);
            return ;
        }
       
        for(auto it : L[digits[i]]){
            helper(digits, i+1, combi + it, ans);
        }
            
        
        
        
    }
    
    
    
    vector<string> letterCombinations(string digits) {
        
        int n = digits.length();
        if(n== 0)
            return {};
        
        vector <int> visited(26,0);
        vector <string> ans;
        
         helper(digits,0, "", ans);
        
        return ans;
        
    }
};