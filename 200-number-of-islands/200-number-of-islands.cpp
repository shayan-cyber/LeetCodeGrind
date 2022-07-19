class Solution {
public:
    
    vector<int> parent;
    vector<int> rank;
    
    
    void makeset(){
        
        for(int i=0; i<parent.size(); i++)
        {
            parent[i] =i;
            rank[i] =0;
        }
    }
    
    
    int findpar(int node){
        if(parent[node] == node)
            return node;
        return parent[node] = findpar(parent[node]); 
        
    }
    
    void uni(int s, int d){
        
        s = findpar(s);
        d = findpar(d);
        
        if(rank[s] > rank[d]){
            
            parent[d] =s;
            
        }else if(rank[s]<rank[d]){
            parent[s] =d;
        }else{
            parent[s] =d;
            rank[d]++;
        }
        
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int l = grid.size()*grid[0].size();
        int n = grid.size();
        int m = grid[0].size();
        
        parent = vector<int> (l);
        rank = vector<int> (l);
        makeset();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == '1'){
                    if(j+1 < m && grid[i][j+1] == '1'){
                        uni(m*i + j  , m*i + j+1 );
                    }
                    if( i+1< grid.size() && grid[i+1][j] == '1'){
                        uni(m*i + j , m*(i+1) + j );
                    }
                }
            }
        }
        
        
        set <int> parents;
//         for(int i=0; i<l; i++){
//             int temp = findpar(i);
//             if(parents.find(temp) == parents.end()){
//                 parents.insert(temp);
//             }
//         }
        
        
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j] == '1'){
                    // int temp = findpar(grid[i].size()*i + j);
                    // if(parents.find(temp) == parents.end()){
                    //     parents.insert(temp);
                    // }
                    
                    parents.insert(findpar(i*m+j));
                }
                
            }
        }
        
        return parents.size();
        
        
        
        
    }
};