class Solution {
public:
    vector<vector<int>> res;
    
    void solve(vector<int> & c, int target, int ind, vector <int> curr){
        if(ind == c.size()){
            if(target ==0){
                res.push_back(curr);
            }
            return;
        }
        
        if(c[ind] <= target){
            curr.push_back(c[ind]);
            solve(c, target - c[ind], ind, curr);
            curr.pop_back();
        }
        
        solve(c, target, ind+1, curr);
        
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates, target, 0, {});
        return res;
    }
};