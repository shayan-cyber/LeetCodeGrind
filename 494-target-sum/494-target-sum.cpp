class Solution {
public:
    int ans=0;
    int solve(vector<int> &nums, int target, int i, int curr){
        
        if(i == nums.size() && curr == target)
            return 1;
        
        if(i >= nums.size() && curr != target )
            return 0;
        
        return solve(nums, target, i+1, curr - nums[i]) + solve(nums, target, i+1, curr +nums[i]);
            
        
        
        
    }
    
    
    int findTargetSumWays(vector<int>& nums, int target) {
        
        return solve(nums, target, 0, 0);
        
    }
};