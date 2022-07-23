class Solution {
public:
    
    vector<bool> ans;
    bool dfs(int s, int d, vector<bool> &vis, vector<int> adj[], int n){
        if(s== d)
            return true;
        // if(vis[s])
        //     return false;
        vis[s] = true;
        
        for(auto it : adj[s]){
            
            if(it == d)
                return true;
            if(!vis[it]){
                vis[it] = true;
                if(dfs(it, d, vis, adj, n)== true)
                    return true;
            }
        }
        
        return false;
        
        
    }
    
    
    
    
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& p, vector<vector<int>>& q) {
        
//         adj list;
        
        
        vector <int> adj[n];
        
        for(int i=0; i<p.size() ; i++){
            
            adj[p[i][0]].push_back(p[i][1]);
        }
        
        for(auto it : q){
            vector<bool> vis(n, false);
            ans.push_back(dfs(it[0], it[1],vis, adj, n));
            
        }
        
        return ans;
        
        
        
        
        
        
    }
};