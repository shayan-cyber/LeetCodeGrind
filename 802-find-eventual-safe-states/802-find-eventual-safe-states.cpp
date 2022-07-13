class Solution {
public:
    
    
    
    bool dfs(int i,vector<vector<int>>& graph,  unordered_map <int, bool > &mp){
        if(mp.find(i) != mp.end())
            return mp[i];
        mp[i] = false;
        
        for(auto it: graph[i]){
            if(dfs(it, graph, mp)== false)
                return mp[i];
            
        }
        
        return mp[i] = true;
        
        
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        
        unordered_map <int, bool > mp;
        vector <int> res;
        
        for(int i=0; i<n; i++){
            if(dfs(i, graph, mp))
                res.push_back(i);
        }
        
        return res;
        
    }
};