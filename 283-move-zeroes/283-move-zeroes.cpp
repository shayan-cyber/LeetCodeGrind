class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n= nums.size();
        
        
//         brute force
//         int count = 0;
        
//         for(int i=0; i<n; i++){
//             if(nums[i] == 0)
//                 count ++;
//         }
        
        
//         while(count >0){
//             for(int i=0; i< n-1; i++){
//                 if(nums[i] == 0){
//                     swap(nums[i+1], nums[i]);
//                 }
//             }
                
                
                
//             count --;
//         }
        
        
        
//         optimized using extra space
        
//         vector <pair <int,int>> v;
//         int prevCount =0;
        
        
//         for(int i =0; i<n; i++){
//             if(nums[i] != 0){
//                 v.push_back(make_pair(nums[i], i-prevCount));
//                 // prevCount =0;
//             }else{
//                 prevCount ++;
//             }
//         }
        
        
//         for(int i=n-1; i>=n-prevCount; i--){
            
//             nums[i]=0;
            
//         }
        
//         for(int i=0; i<v.size(); i++){
//             nums[v[i].second] = v[i].first;
//         }
        
        
        
        
//         more optimized two pointer
        
        int j=0;
        for(int i=0; i<n; i++){
            if(nums[i]){
                nums[j] = nums[i];
                    j++;
            }
        }
        
        while(j < n){
            nums[j] = 0;
            j++;
        }
        
        
    }
};