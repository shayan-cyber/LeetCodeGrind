class Solution {
public:
    int parent[1001];
    int rank[1001];
    void makeset(){
        for(int i=0; i<1001; i++){
            parent[i] =i;
            rank[i] =0;
        }
    }
    
    
    int findpar(int u){
        if(u == parent[u])
            return u;
        return parent[u] = findpar(parent[u]);
        
    }
    
    void uni(int u, int v){
        u = findpar(u);
        v = findpar(v);
        if(rank[u] < rank[v]){
            parent[u] = v;
        }else if(rank[u]> rank[v]){
            parent[v] =u;
        }else{
            parent[v] = u;
            rank[u]++;
            
        }
        
    }
    
    
    int removeStones(vector<vector<int>>& stones) {
        
        makeset();
        
        
        for(int i=0; i<stones.size(); i++){
            for(int j=i+1; j<stones.size(); j++){
                if(stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1])
                    uni(i,j);
            }
            
        }
        
        set <int> parents;
        
        
        for(int i=0; i<stones.size(); i++){
            int temp = findpar(i);
            if(parents.find(temp) == parents.end()){
                parents.insert(temp);
            }
            
        }
        
        return stones.size() - parents.size();
        
        
    }
};