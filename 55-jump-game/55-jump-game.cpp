class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int i=0; 
        int currReach = 0;
        int currMax = 0;
        
        int n = nums.size();
        
        while(i<n-1){
            
            currMax = max(currMax, nums[i] +i) ;
            if(currReach==i){
                currReach = currMax;
            }    
            i++;
            
            
        }
        cout<<currReach<<" ";
        if(currReach >=n-1){
            return true;
        }else{
            
            return false;
        }
        
        
        
        
        
        
    }
};