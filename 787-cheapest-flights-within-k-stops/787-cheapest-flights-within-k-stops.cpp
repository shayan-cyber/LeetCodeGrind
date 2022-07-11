class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        
        
        vector <int> dist(n,INT_MAX);
        dist[src] =0;
        
        for(int i=0; i<k+1; i++){
            
            
            vector <int> temp(dist);
            for(auto it : flights){
                
                if(dist[it[0]] != INT_MAX){
                    temp[it[1]] =min(temp[it[1]], dist[it[0]] + it[2]);
                }
                
                
                
            }
            
            dist = temp;
            
            
        }
        
        
        if(dist[dst] == INT_MAX)
            return -1;
        return dist[dst];
    }
};