class Solution {
public:
    string minWindow(string s, string t) {
        
        int n = s.length();
        int low = 0;
        int high =0;
        int left =0;
       
        int mn = INT_MAX;
        
        unordered_map <char,int> mp;
        
        for(int i=0; i<t.length(); i++){
            mp[t[i]]++;
        }
        int count = mp.size();
        
        for(int j=0; j<n; j++){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]] ==0){
                    count--;
                }
            }
            
            while( count ==0){
                if(mn> j-left+1){
                    low = left;
                    high = j;
                    mn = j-left+1;
                }
                
                if(mp.find(s[left]) != mp.end()){
                    mp[s[left]]++;
                    if(mp[s[left]] == 1){
                        count++;
                    }
                }
                left++;
                    
            }
            
        }
        
        if(mn == INT_MAX)
            return "";
            
        
        return s.substr(low, mn);
        
        
        
        
        
    }
};