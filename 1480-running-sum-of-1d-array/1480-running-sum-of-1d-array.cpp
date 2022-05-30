class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector <int> v;
        
        
        int n= nums.size();
        v.push_back(nums[0]);
        for(int i=1; i<n; i++){
            v.push_back(nums[i] + v[i-1]);
        }
        
        return v;
    }
};