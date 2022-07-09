class Solution {
public:
    
    
    bool help(vector <int> & nums, int mid, int maxOperations){
        
        
        int count =0;
        
        for(int i=0; i<nums.size(); i++){
            
            count += nums[i]/mid;
            
            if(nums[i]%mid ==0)
                count--;  
        }
        
        if(count > maxOperations)
            return false;
        return true; 
    }
    
    
    
    int minimumSize(vector<int>& nums, int maxOperations) {
       
        int low = 1;
        
        int high =0;
        
        for(int i=0; i<nums.size(); i++){
            high = max(high, nums[i]);
        }
        
        
        int res;
        while(low<=high){
            int mid = (low+high)/2;
            
            if(help(nums,mid, maxOperations)){
                res = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
            
                  
        }
        
        return res;
    }
};