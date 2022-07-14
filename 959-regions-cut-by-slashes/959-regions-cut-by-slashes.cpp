class Solution {
public:
    int parent[31*31];
    int rank[31*31];
    int count =1;
    void makeset(){
        
        for(int i=0; i<31*31; i++){
            parent[i] =i;
            rank[i] =0;
        }
        
    }
    
    
    
    int findpar(int node){
        
        if(parent[node] == node)
            return node;
        return parent[node] = findpar(parent[node]);
        
    }
    
    void uni(int u, int v){
        
        u = findpar(u);
        v = findpar(v);
        if(u != v){
            if(rank[u]> rank[v]){
                parent[v] = u;
            }else if(rank[u]< rank[v])
            {
                parent[u] = v;
            }else{
                parent[u] = v;
                rank[v]++;
            }
        }else{
            count++;
        }
        
        
    }
    
    
    
    int regionsBySlashes(vector<string>& grid) {
        
        
        int n = grid.size();
        int dots = n+1;
        makeset();
        for(int i=0; i<dots; i++){
            for(int j =0; j<dots; j++){
                if(i==0|| j==0|| i== dots-1|| j == dots-1){
                    int cell = i*dots + j;
                    if(cell != 0){
                        uni(0, cell);
                    }
                    
                    
                    
                }
            }
        }
        
        
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == '\\'){
                   int cell1 = i*dots + j;
                   int cell2 = (i+1)*dots +j+1; 
                    uni(cell1, cell2);
                 }else if(grid[i][j] == '/'){
                    int cell1= (i+1)*dots + j;
                    int cell2 = i*dots + j+1;
                    uni(cell1,cell2);
                }
            }
            
            
        }
        
        return count;
        
    }
};