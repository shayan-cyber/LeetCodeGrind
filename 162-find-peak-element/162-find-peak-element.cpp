class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
//         brute force
        int n = nums.size();
        if(n==1)
            return 0;
        
        for(int i=0; i<nums.size(); i++){
            
            
            if(i==0){
                if(n >=2 && nums[0] > nums[1])
                    return 0;
            }
            
            if(i==n-1){
                if(n>= 2 && nums[n-1] > nums[n-2] )
                    return n-1;
            }
            
            if(i-1>=0 && i+1<n &&nums[i]> nums[i-1] && nums[i]> nums[i+1])
            return i;
            
        }
        
        
        return -1;
        
        
    }
};