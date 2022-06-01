class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int prefix[n];
        
        
        prefix[0] = nums[0];
       
        
        for(int i=1; i<n; i++){
            prefix[i] = nums[i]+prefix[i-1];
          
        }
        
        
        
        
        int count =0;
        unordered_map <int,int>m;
        
        
        for(int i=0; i<n; i++){
            
            if(prefix[i] == k)
                count++;
            
            if(m.find(prefix[i] -k) != m.end()){
                count = count + m[prefix[i]-k];
            }
            m[prefix[i]] ++;
            
        }
        
        
        return count;
    }
};