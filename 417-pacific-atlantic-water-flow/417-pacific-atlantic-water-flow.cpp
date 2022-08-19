class Solution {
public:
    vector<pair<int,int>> pac;
    vector<pair<int, int>> atl;
    set <pair<int,int>>vis1;
    vector <vector<int>> ans;
    
    bool isvalid(int i, int j, int n, int m){
        
        
        if(i >= n || i< 0 || j >= m || j <0)
            return false;
        return true;
        
    }
        
    void dfs(vector<vector<int>> & h, int i, int j, int n, int m, set <pair<int,int>> &vis, vector<pair<int,int>> & v){
        if(i >= n || j >= m)
            return;
        
        vis.insert({i,j});
        v.push_back({i, j});
        
        
        vector <int> dir = {-1,0, 1,0, -1};
        
        for(int k=1; k<5; k++){
            int r = i + dir[k-1];
            int c = j + dir[k];
            if(isvalid(r, c, n, m) && h[r][c] >= h[i][j] && vis.find({r, c}) == vis.end()){
                dfs(h, r, c, n, m, vis, v);
                
            }
            
            
            
        }
        
        
        
        
        
        
        
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights)   {
        
//         check for pacific 
        
        int n = heights.size();
        int m = heights[0].size();
        
        set <pair<int,int>> vis1;
        for(int i=0; i<m ; i++){
            
            dfs(heights, 0, i,n , m,vis1, pac  );
            
        }
        
        for(int i=0; i<n ; i++){
            
            dfs(heights, i, 0,n , m,vis1, pac  );
            
        }
        
        
        
//         check for atlantic
        
        set <pair<int,int>> vis2;
        
        for(int i=0; i<n ; i++){
            
            dfs(heights, i, m-1,n , m,vis2, atl  );
            
        }
        
        for(int i=0; i<m ; i++){
            
            dfs(heights, n-1, i,n , m,vis2, atl  );
            
        }
        
        
        
        for(auto it : vis1){
            if(vis2.find(it) != vis2.end()){
                ans.push_back({it.first, it.second});
            }
        }
        
        
        return ans;
        
        
        
        
        
        
        
        
        
    }
};