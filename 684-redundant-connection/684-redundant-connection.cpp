class Solution {
public:
    int parent[1001];
    int rank[1001];
    
    void build(){
        for(int i=0; i<1001; i++){
            parent[i] = i;
            rank[i]= 0;
        }
    }
    
    
    int findparent(int x){
        
        if(parent[x] ==x )
            return x;
        else 
            return parent[x] = findparent(parent[x]);
        
        
    }
    
    int start;
    int end;
    
    void uni(int x, int y){
        int u = findparent(x);
        int v = findparent(y);
        if(u == v){
            
            start = x;
            end = y;
            return ;
        }
        if(rank[u] > rank[v]){
            parent[v] = u;
        }else if(rank[u] < rank[v]){
            parent[u] =v;
        }else{
            parent[u] = v;
            rank[v] ++;
        }
    }
    
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
        int n = edges.size();
        
        vector<int> adj[n+1];
        
        vector<bool> vis(n+1, false);
        // sort(edges.begin(), )
        build();
        for(auto it : edges ){
            
            uni(it[0], it[1]);
        }
        return {start, end};
        
        
        
        
    }
};