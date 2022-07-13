class Solution {
public:
    
    void dfs(int s, vector<vector<int>>& rooms, set<int> &vis){
        if(vis.find(s) != vis.end())
            return;
        vis.insert(s);
        
        for(auto it: rooms[s]){
            if(vis.find(it) == vis.end())
                dfs(it, rooms, vis);
        }
        
        
        
    }
    
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int n = rooms.size();
        
        set <int> vis;
        
        
        dfs(0,rooms, vis );
    
        if(vis.size() == n)
            return true;
        return false;
        
    
    
    }
};