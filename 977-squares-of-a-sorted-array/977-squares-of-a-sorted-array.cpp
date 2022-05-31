class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n= nums.size();
        
//         merge sorted arrays
//         int count =-1;
//         for(int i=0; i<n; i++){
            
//             if(nums[i]<0)
//                 count ++;
//             nums[i] = nums[i]*nums[i];
            
//         }
//         // cout<<count;
//         vector<int> v;
//         int i=count;
//         int j = count +1;
//         while(i>=0 && j<n){
//                 if(nums[j]<nums[i]){
//                     v.push_back(nums[j]);
//                     j++;
                    
//                 }else{
//                     v.push_back(nums[i]);
//                     i--;
//                 }
//         }
        
//         while(j<n){
//             v.push_back(nums[j]);
//             j++;
//         }
        
//         while(i>=0){
//             v.push_back(nums[i]);
//             i--;
//         }
        
//         return v;
        
        
        
//         two pointer
        
        
        vector <int> v(n);
        
        int i=0;
        int j=n-1;
        
        int pos= n-1;
        
        while(i<=j){
            
            if(abs(nums[i]) > abs(nums[j])){
                v[pos] = nums[i]*nums[i];
                pos --;
                i++;
                    
            }else{
                v[pos] = nums[j]*nums[j];
                pos --;
                j--;
                
            }
            
            
        }
        
        
        return v;
        
        
    }
};