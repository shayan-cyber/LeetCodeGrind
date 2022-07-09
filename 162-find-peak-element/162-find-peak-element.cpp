class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return 0;
        int low =0;
        int high = n-1;
        while(low<=high){
            
            int mid = low + (high -low)/2;
            
            if(mid>0 && mid<n-1){
             
                
                if(nums[mid]> nums[mid-1] && nums[mid]> nums[mid+1])
                    return mid;
                else if(nums[mid]<nums[mid-1])
                    high = mid-1;
                else 
                    low = mid +1;
                
                
                
            }else if(mid ==0 ){
              if(nums[mid] > nums[mid+1])
                    return 0;
                else
                    low = mid+1;
                
            }else if(mid==n-1)
                if( nums[mid] > nums[mid-1])
                return n-1;
                else
                    high = mid -1;
        }
        return -1;
    }
};