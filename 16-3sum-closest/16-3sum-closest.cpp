class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
     
        int t= INT_MAX;
        for(int i=0; i<n; i++){
            int temp = target - nums[i];
            
            int k = i+1;
            int j = n-1;
           

            while(k<j){
                
                if(abs(t)>abs(temp-(nums[k]+nums[j]))){
                    
                    t = (temp - (nums[k] + nums[j]));
                 
                }
                
                if(nums[j]+nums[k] == temp){
                    return target;
                }
                if(nums[k]+nums[j] > temp){
                   
                    j--;
                    
                }else{
                    k++;
                }
                
            }
            

            
       
            
            
            
        }
        
        return target -t;

        
        
    }
};