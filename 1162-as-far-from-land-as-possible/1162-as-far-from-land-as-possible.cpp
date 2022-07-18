class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        
        int n = grid.size();
        queue <pair<int,int>> q;
        
        for(int i=0; i<n; i++){
            
            for(int j=0; j<n; j++){
                
                if(grid[i][j] == 1)
                    q.push({i,j});
                
            }
        }
        
        
        if(q.size() == n*n|| q.size() ==0)
            return -1;
        
        
        int level =-1;
        
        while(!q.empty()){
            level++;
            int l = q.size();
            
            while(l--){
                pair <int,int> t = q.front();
                q.pop();
                
                vector<pair<int,int>> dirs = {{0,-1}, {-1,0}, {0,1}, {1,0}};
                for(int i=0; i<4; i++){
                    int row = t.first + dirs[i].first;
                    int col = t.second + dirs[i].second;
                    
                    if(row<0 || col <0 || row >= n || col >= n || grid[row][col]==1)
                        continue;
                    
                    grid[row][col] =1;
                    q.push({row,col});
                    
                    
                    
                }
                
                
                
            }
            
            
        }
        return level;
        
        
        
        
    }
};