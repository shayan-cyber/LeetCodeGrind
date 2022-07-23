class Solution {
public:
    
    
    void solve(vector<int> &indegree, int n, vector<int> adj[]){
        
        for(int i=0; i<n; i++){
            for(auto it: adj[i]){
                indegree[it]++;
            }
            
        }
        
        queue <int> q;
        for(int i=0; i<n; i++){
            
            if(indegree[i] == 0)
                q.push(i);
            
        }
        
        
        
        while(!q.empty()){
            
            int u = q.front();
            q.pop();
            for(auto it: adj[u]){
                indegree[it]--;
                if(indegree[it]==0)
                    q.push(it);
            }
            
        }
        
        
    }
    
    
    
    
    bool canFinish(int n, vector<vector<int>>& p) {
        
        
//         make adj list
        vector <int> adj[n];
        vector<int> indegree(n,0) ;
        // memset(indegree, 0, n);
        for(int i=0; i<p.size(); i++){
            
            adj[p[i][1]].push_back(p[i][0]);
            
            
        }
        solve(indegree,n, adj);
        for(int i=0; i<n; i++)
            if(indegree[i] != 0)
                return false;
        return true;
        
        
        
    }
};