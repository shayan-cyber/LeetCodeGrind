class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        
        int n = nums.size();
        unordered_map <int,int> m;
        m[0] = 1;
        int count =0;
        int currSum = 0;
        int remainder =0;
        for(int i=0; i<n; i++){
            currSum = currSum + nums[i];
            remainder = currSum%k;
            
            if(remainder <0){
                remainder = k + remainder;
            }
            if(m.find(remainder) != m.end()){
                count = count + m[remainder];
            }
            
            m[remainder] ++;
            
        }
        return count;
        
    }
};