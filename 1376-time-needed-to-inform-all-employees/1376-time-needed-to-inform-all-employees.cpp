class Solution {
public:
    int time = 0;
    void dfs(vector<int> adj[], int s, vector<int> & informTime, int t){
        time = max (t, time);
        for(auto it : adj[s]){
            dfs(adj, it, informTime, informTime[s]+t );
        }
        
        
    }
    
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        
        
        vector <int> adj[n];
        
        for(int i=0; i<n; i++){
            if(manager[i] != -1)
            adj[manager[i]].push_back(i);
            
        }
        
        
        dfs(adj,headID,informTime,0);
        return time;
        
        
        
        
        
        
        
        
    }
};