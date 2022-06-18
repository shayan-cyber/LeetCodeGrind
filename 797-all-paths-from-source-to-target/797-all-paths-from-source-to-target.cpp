class Solution {
public:
    
    
    int target;
    vector<vector<int>> ans;
    vector <int> temp;
    
    void dfs(vector<vector<int>>& graph, int s){
        temp.push_back(s);
        
        if(s == target){
          
            ans.push_back(temp);
            // temp.clear();
        }
        
        else{
            for(auto it : graph[s]){
            
             dfs(graph, it);
            }
        }
        
        
        temp.pop_back();
    }
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        
        int s= 0;
        target = graph.size()-1;
        
        dfs(graph,0);
        
        
        return ans;
        
        
        
    }
};