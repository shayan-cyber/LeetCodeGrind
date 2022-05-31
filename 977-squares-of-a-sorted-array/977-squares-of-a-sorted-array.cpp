class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n= nums.size();
        int count =-1;
        for(int i=0; i<n; i++){
            
            if(nums[i]<0)
                count ++;
            nums[i] = nums[i]*nums[i];
            
        }
        // cout<<count;
        vector<int> v;
        int i=count;
        int j = count +1;
        while(i>=0 && j<n){
                if(nums[j]<nums[i]){
                    v.push_back(nums[j]);
                    j++;
                    
                }else{
                    v.push_back(nums[i]);
                    i--;
                }
        }
        
        while(j<n){
            v.push_back(nums[j]);
            j++;
        }
        
        while(i>=0){
            v.push_back(nums[i]);
            i--;
        }
        
        return v;
        
        
    }
};