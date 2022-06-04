class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        int n = nums.size();
        set <int> s;
   
        vector<int> temp = nums;
        set <int> duplicates;
        set <pair<int,int>> check;
        
        
        
        for(int i=0; i<n; i++){
            if(s.find(nums[i]) != s.end()){
                duplicates.insert(nums[i]);
            }
            s.insert(nums[i]);
        }
        
        for(int i=0;i<n;i++){
            
            nums[i] = nums[i]-k;
        }
        
        int count =0;
        for(int i=0; i<n; i++){
            
            if(s.find(nums[i]) != s.end()){
                pair<int,int>p; 
                if(nums[i] > temp[i]){
                    p = make_pair(temp[i], nums[i]);
                }else{
                    p = make_pair(nums[i],temp[i]);
                }
                
                if(check.find(p) == check.end()){
                    check.insert(p);
                    count++;
                }
                
                // count++;
            }
        }
        if(k==0)
            return duplicates.size();
        
        
      return count; 
        
    }
};