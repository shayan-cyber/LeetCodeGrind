class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            if(abs(nums[i])-1 >= 0 && abs(nums[i])-1 <n){
                // if(nums[as])
                if(nums[abs(nums[i])-1] ==0){
                    nums[abs(nums[i])-1] = -(n+2);
                }else
                nums[abs(nums[i])-1] = -nums[abs(nums[i])-1]; 
                
                
            }
        }
        
        for(int i=0; i<n; i++){
            cout<<nums[i]<<" ";
        }
        
        for(int i=0; i<n; i++){
            if(nums[i]>=0){
                return i+1;
            }
        }
        
        return 0;
        
        
        
        
        
    }
};