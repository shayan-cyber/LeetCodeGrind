class Solution {
public:
    vector<vector<int>> dp;
    
    
    int solve(vector<int> & nums, int start , int end, bool turn){
        
        
       if(start > end ){
           return 0;
       }
        if(dp[start][end] != -1)
            return dp[start][end];
        if(turn){
            
             return dp[start][end] = max(solve(nums, start+1, end, false) + nums[start], solve(nums, start, end-1, false) + nums[end]);
        
        }else{
            return dp[start][end] = min(solve(nums, start+1, end, true), solve(nums, start, end-1, true));
        }
        
        
        
       // return max(solve(nums, start+2, end)+ nums[start], solve(nums, start, end-2) + nums[end]);
        
        
    }
    
    
    bool PredictTheWinner(vector<int>& nums) {
        
        dp = vector<vector<int>>(nums.size()+1, vector<int> (nums.size()+1, -1));
        
        int sum =0;
        for(int i =0; i< nums.size(); i++){
            sum = sum + nums[i];
        }
        int s1 = solve(nums, 0, nums.size()-1,true);
        int s2 = sum - s1;
        
        
        return s1>=s2;
        
    }
};