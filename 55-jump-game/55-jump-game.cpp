class Solution {
public:
    bool canJump(vector<int>& nums) {
            //first approach
//         int i=0; 
//         int currReach = 0;
//         int currMax = 0;
        
//         int n = nums.size();
        
//         while(i<n-1){
            
//             currMax = max(currMax, nums[i] +i) ;
//             if(currReach==i){
//                 currReach = currMax;
//             }    
//             i++;
            
            
//         }
//         // cout<<currReach<<" ";
//         if(currReach >=n-1){
//             return true;
//         }else{
            
//             return false;
//         }
        
        
        //second approach
        
        
        
        int n = nums.size();
        int maxJumpenergy = 0;
        
        for(int i=0; i<n; i++){
            if(maxJumpenergy<0)
                return false;
            
            maxJumpenergy = max(maxJumpenergy,nums[i])-1;
        }
        
        
        return true;
        
        
        
        
        
        
        
    }
};