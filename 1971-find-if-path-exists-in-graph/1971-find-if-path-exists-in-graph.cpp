class Solution {
public:
    bool flag = false; 
    void dfs(int s, int d,vector<int> adj[], vector<bool> &vis){
        
        if(s== d){
            flag = true;
            return ;
        }
        
        vis[s] = true;
        
        for(auto it: adj[s]){
            if(!vis[it]){
                dfs(it, d, adj, vis);
            }
        }
        
        
        
        
    }
    
    
    
    
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
        
        vector <int> adj[n];
        
        
        for(int i=0; i<edges.size(); i++){
            
            
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            
            
        }
        vector <bool> vis(n,false);
        
        
        dfs(s, d,adj, vis );
        return flag;
        
        
        
    }
};