class Solution {
public:
    bool ispossible(int i, int n, vector<int> &colors, vector<vector<int>> &graph, int newcol){
        colors[i] = newcol;
        
        
        for(auto it : graph[i]){
            if(colors[it] == -1){
                if(!ispossible(it, n, colors, graph, 1 - newcol))
                 return false;
            }
            else if(colors[it] == colors[i])
                return false;
            
        }
        
        return true;
    }
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> colors(n,-1);
        cout<<n<<" ";
        
        for(int i=0; i<n; i++){
            
            if(colors[i] == -1)
                if(!ispossible(i,n, colors, graph,1))
                    return false;
        }
        
        return true;
    }
};