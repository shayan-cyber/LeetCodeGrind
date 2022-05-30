class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int sum =0;
        int n = nums.size();
        int prevSum =0;
        
        for(int i=0; i<n; i++){
            sum += nums[i];
        }
        
        
        for(int i=0; i<n; i++){
            if((sum - nums[i]) % 2 == 0 && (sum - nums[i])/2 == prevSum){
                
                return i;
                
            }
            prevSum += nums[i];
            
            
        }
        
        return -1;
        
    }
};