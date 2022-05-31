class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        
//         using map
//         unordered_map <int,int> mp ;
        
//         for(int i=0; i<n; i++){
            
//             if(mp.find(nums[i]) != mp.end()){
//                 mp[nums[i]] ++;
//             }else{
//                 mp[nums[i]] =1;
//             }
//         }
        
        
        
//         for(auto i:mp){
//             if(i.second>n/2){
//                 return i.first;
//             }
//         }
        
//         return -1;
        
        
        
//         Boyer–Moore majority vote algorithm 
        
        
        int c=nums[0];
        int v = 1;
        
        
        for(int i=1; i<n; i++){
            
            
            if(nums[i] == c){
                v++;
                continue;
            }else{
                v--;
            }
            
            if(v==0){
                c = nums[i];
                v= 1;
            }
            
        }
        
        return c;
        
        
        
        
    }
};