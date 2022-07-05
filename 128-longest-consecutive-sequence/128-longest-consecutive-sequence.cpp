class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        
       unordered_set <int> s(begin(nums), end(nums));
        
        int longest = 0;
        for(auto &it : s){
            
            if(s.find(it-1) != s.end()) continue;
            
            int j =1;
            while(s.find(it+j) != s.end()){
                j++;
            }
            
            longest = max(longest,j);
            
        }
        
        
        return longest;
        
    }
};