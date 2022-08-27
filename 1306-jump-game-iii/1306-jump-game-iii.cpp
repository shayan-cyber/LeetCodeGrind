class Solution {
public:
    vector <bool> vis;
    
//     bool solve(vector<int> & arr, int start){
        
//         if(start >= arr.size() || start < 0)
//             return false;
        
//         if(vis[start] == true)
//             return false;
//         vis[start] =true;
        
        
//         if(arr[start] == 0)
//             return true;
//         // if(dp[start] != -1)
//         //     return dp[start];
//         return  solve(arr, start - arr[start]) || solve(arr, start + arr[start]);
        
        
        
//     }
    
    
    bool solve(vector<int>& arr, int start){
        
        if(start < 0 || start >= arr.size())
            return false;
        
        
        if(arr[start] == 0)
            return true;
        
        queue <int> q;
        q.push(start);
        unordered_set <int> vis;
        
        while(!q.empty()){
            
            int top = q.front();
            q.pop();
            vis.insert(top);
            if(arr[top] == 0)
                return true;
            
            int first = top + arr[top];
            int second = top - arr[top];
            
            if(first < arr.size() && vis.find(first) == vis.end()){
                q.push(first);
                
                
                
            }
            
            if(second >=0 && vis.find(second) == vis.end()){
                q.push(second);
            }
            
        }
        
        return false;
        
        
        
    }
    
    
    bool canReach(vector<int>& arr, int start) {
        
        vis =vector<bool> (arr.size()+1, false);
        return solve(arr,start);
    }
};