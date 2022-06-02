class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        
        int N = nums.size();
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        set <vector<int>> s;
        
        
        for(int i=0; i<N; i++){
            for(int j=i+1; j<N; j++){
                
                int temp = target - nums[i] - nums[j];
                
                int m=j+1;
                int n= N-1;
                
                while(m<n){
                    if(temp == nums[m]+ nums[n]){
                        if(s.find({nums[i], nums[j], nums[m],nums[n]}) == s.end()){
                            v.push_back({nums[i], nums[j], nums[m],nums[n]});
                            s.insert({nums[i], nums[j], nums[m],nums[n]});
                            
                        }
                        
                        m++;
                        n--;
                    }else if(temp < (nums[m]+ nums[n])){
                        n--;
                    }else{
                        m++;
                    }
                }
                
            }
        }
        return v;
        
    }
};