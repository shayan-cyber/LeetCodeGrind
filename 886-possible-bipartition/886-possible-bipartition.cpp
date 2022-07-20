class Solution {
public:
    
    bool possibleToCol(int s, vector<int> adj[], vector<int> &colors, int newcol){
        
        colors[s] = newcol;
        
        for(auto k: adj[s]){
            
            if(colors[k] == -1){
                possibleToCol(k,adj,colors, 1-newcol);
                    
            }else if(colors[s] == colors[k]){
                    return false;
            }
            
        }
        
        
        return true;
    }
    
    
    
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
    
//         adj list
        
        
        
        vector <int> adj[n+1];
        vector <int> colors(n+1, -1);
        
        for(auto it:dislikes){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        for(int i=1; i<n+1; i++){

                if(colors[i] == -1){
                    if(!possibleToCol(i, adj, colors, 1))
                        return false;
                }
            
        }
        
        return true;
        
        
    }
};