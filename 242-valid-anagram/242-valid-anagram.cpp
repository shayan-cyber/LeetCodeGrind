class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map <char, int> mp;
        
        for(int i=0; i<s.length(); i++){
            
            mp[s[i]]++;
            
            
        }
        
        if(s.length() != t.length())
            return false;
        for(int i=0; i<t.length(); i++){
            if(mp.find(t[i]) == mp.end() ){
                
                return false;
            }
            if(mp[t[i]] == 0)
                return false;
            mp[t[i]] --;
            
            
            
        }
        
        return true;
        
    }
};