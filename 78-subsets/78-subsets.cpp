class Solution {
public:
    vector <vector<int>> ans;
    
    void Solve(vector<int>& nums, int i, vector <int> temp ){
        int n= nums.size();
        if(i == n)
            return ans.push_back(temp);
        
        temp.push_back(nums[i]);
        Solve(nums, i+1, temp);
        temp.pop_back();
        Solve(nums,i+1,temp);
        
        
        
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        
        
        vector <int> temp;
        Solve(nums, 0, temp);
        return ans;
        
    }
};