class Solution {
public:
    int minDeletions(string s) {
        
        vector<int> v(26); 
        int n = s.length();
        
        for(int i=0; i<n; i++){
            v[s[i] -'a'] ++;
            
        }
        
        sort(v.begin(),v.end(),greater<int>());
    
        int allowed =v[0];
        int res = 0;
        
        
        for(int i=0; i<26; i++){
            
            
            if(v[i] > allowed){
                if(allowed >0)
                    res = res + v[i]-allowed;
                else
                    res = res + v[i];
            }
            
            allowed = min(allowed-1, v[i]-1);
            
            
        }
        
        return res;
    }
};