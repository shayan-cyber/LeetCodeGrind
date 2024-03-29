class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        
        
        //first approach (brute force not ideal cause it'll take nlogn time in worst case)
//         int n =nums.size();
//         sort(nums.begin(), nums.end());
//         int curr =1;
        
//         for(int i=0; i<n; i++){
//             if(curr > nums[i])
//                 continue;
//             if(curr < nums[i])
//                 return curr;
//             else
//                 curr++;
//         }
        
//         return curr;
        
        
        
        
//         second approach from YT help
        
        int n = nums.size();
            
        
        for(int i=0; i<n; i++){
            
            if(nums[i]<=0)
                nums[i] = n+1;
        }
        
        
        for(int i=0; i<n; i++){
            if(abs(nums[i])<=n && nums[abs(nums[i])-1]>0){
                nums[abs(nums[i])-1] = nums[abs(nums[i])-1]*(-1);
            }
            
            
        }
        
        for(int i=0; i<n; i++){
            if(nums[i]>0)
                return i+1;
        }
        
        
        return n+1;
        
        
        
    }
};