class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        int n = nums.size();
//         first approach
//         set <int> s;
   
//         vector<int> temp = nums;
//         set <int> duplicates;
//         set <pair<int,int>> check;
        
        
        
//         for(int i=0; i<n; i++){
//             if(s.find(nums[i]) != s.end()){
//                 duplicates.insert(nums[i]);
//             }
//             s.insert(nums[i]);
//         }
        
//         for(int i=0;i<n;i++){
            
//             nums[i] = nums[i]-k;
//         }
        
//         int count =0;
//         for(int i=0; i<n; i++){
            
//             if(s.find(nums[i]) != s.end()){
//                 pair<int,int>p; 
//                 if(nums[i] > temp[i]){
//                     p = make_pair(temp[i], nums[i]);
//                 }else{
//                     p = make_pair(nums[i],temp[i]);
//                 }
                
//                 if(check.find(p) == check.end()){
//                     check.insert(p);
//                     count++;
//                 }
                
               
//             }
//         }
//         if(k==0)
//             return duplicates.size();
        
        
//         easier approach;
        
        
        int count =0;
        unordered_map <int,int> mp;
        
        
        for(int i=0; i<n ; i++){
            if(mp.find(nums[i]) != mp.end())
                mp[nums[i]]++;
            else
            mp[nums[i]] =1;
        }
        
        if(k==0){
            for(auto a:mp){
                // cout<<a.first<<" "<<a.second<<" ";
                if(a.second>1){
                    
                    count++;
                }
            }
        }else{
            for(auto it :mp){
                if(mp.find(it.first+k) != mp.end())
                    count++;
            }
        }
        
        
        
        
        
      return count; 
        
    }
};