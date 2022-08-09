class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        
        
        
        int res = INT_MIN;
        int currSum = 0;
        
        
        for(int i=0; i<nums.size(); i++ ){
            currSum = currSum + nums[i];
            res = max(res, currSum);
            if(currSum < 0){
                currSum = 0;
            }
            
        }
       
        return res;
        
    }
};