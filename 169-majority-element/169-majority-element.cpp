class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map <int,int> mp ;
        
        for(int i=0; i<n; i++){
            
            if(mp.find(nums[i]) != mp.end()){
                mp[nums[i]] ++;
            }else{
                mp[nums[i]] =1;
            }
        }
        
        
        
        for(auto i:mp){
            if(i.second>n/2){
                return i.first;
            }
        }
        
        return -1;
        
    }
};