class Solution {
public:
    
    void bfs(int i, int j, vector<vector<int>>& image, int n, int m, int color){
        if(i < 0 || i>=n || j<0 || j>= m)
            return;
        
        queue <pair<int,int>>q;
        
        q.push({i,j});
        vector<int> dir = {-1,0, 1, 0, -1};
        int col = image[i][j];
        set <pair<int,int>> vis;
        vis.insert({i,j});
        
        while(!q.empty()){
            pair<int,int> t = q.front();
            q.pop();
            
            image[t.first][t.second] = color;
            
            for(int i=0; i<4; i++){
                int r = t.first + dir[i];
                int c = t.second + dir[i+1];
                
                if(r>=0 && c>=0 && r<n && c <m && image[r][c] == col && vis.find({r,c}) == vis.end()){
                    q.push({r,c});
                    vis.insert({r,c});
                }
            }
            
        }
        
        
        
    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int n = image.size();
        int m = image[0].size();
        bfs(sr,sc,image, n,m, color);
        return image;
        
        
    }
};