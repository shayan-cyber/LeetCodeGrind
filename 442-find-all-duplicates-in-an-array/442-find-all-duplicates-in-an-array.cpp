class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        int n= nums.size();
        sort(nums.begin(), nums.end());
        vector<int> v;
        for(int i=1; i<n; i++){
            if(nums[i-1]==nums[i]){
                v.push_back(nums[i]);
            }
        }
        
        return v;
        
        
        
        
    }
};