class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
//         int sum =0;
//         int n = nums.size();
//         int prevSum =0;
        
//         for(int i=0; i<n; i++){
//             sum += nums[i];
//         }
        
        
//         for(int i=0; i<n; i++){
//             if((sum - nums[i]) % 2 == 0 && (sum - nums[i])/2 == prevSum){
                
//                 return i;
                
//             }
//             prevSum += nums[i];
            
            
//         }
        
//         return -1;
        
        
        
        int n = nums.size();
        int left[n];
        int right[n];
        left[0] = nums[0];
        right[n-1] = nums[n-1];
        
        for(int i=1; i<n; i++){
            
            left[i] = nums[i] + left[i-1];
            right[n-i-1] = nums[n-i-1] + right[n-i];
        }
        
        for(int i=0; i<n; i++){
            if(left[i] == right[i])
                return i;
        }
       
        
        return -1;
        
        
    }
};