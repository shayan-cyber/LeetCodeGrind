class Solution {
public:
    bool checkLetters(string &word1, string &word2, unordered_map<char,int> &mp){
            
        
        int i =0;
        while(i<word1.size() && i< word2.size()){
            if(mp[word1[i]] != mp[word2[i]]){
                return mp[word2[i]]> mp[word1[i]];
            }
            i++;
            
        }
        
        
        return word2.size() >= word1.size();
        
        
    }
    
    
    bool isAlienSorted(vector<string>& words, string order) {
        
        int n = words.size();
        
        int arr[n];
        
        unordered_map <char, int> mp;
        
        for(int i=0; i<26; i++){
            mp[order[i]] = i;
        }
        
        
        
        for(int i=0; i<n-1; i++){
            if( !checkLetters(words[i], words[i+1], mp))
                return false;
                
            
        }
        return true;
        
        
        
    }
};