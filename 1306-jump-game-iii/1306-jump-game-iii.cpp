class Solution {
public:
    vector <bool> vis;
    
    bool solve(vector<int> & arr, int start){
        
        if(start >= arr.size() || start < 0)
            return false;
        
        if(vis[start] == true)
            return false;
        vis[start] =true;
        
        
        if(arr[start] == 0)
            return true;
        // if(dp[start] != -1)
        //     return dp[start];
        return  solve(arr, start - arr[start]) || solve(arr, start + arr[start]);
        
        
        
    }
    
    
    bool canReach(vector<int>& arr, int start) {
        
        vis =vector<bool> (arr.size()+1, false);
        return solve(arr,start);
    }
};