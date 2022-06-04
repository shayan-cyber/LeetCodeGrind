class Solution {
public:
    
    int Solve(vector<vector<int>> grid, int i, int j, set <pair<int,int>> &s){
        int m = grid.size();
        int n = grid[0].size(); 
        if(i<0|| j<0 || i>=m || j>=n || grid[i][j] ==0 || s.find(make_pair(i,j)) != s.end()){
            return 0;
        }
        
        if(grid[i][j])
            s.insert(make_pair(i,j));
        return 1 + Solve(grid, i+1, j,s) + Solve(grid, i-1, j,s) + Solve(grid, i, j+1,s) + Solve(grid, i, j-1,s);
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int maxA = 0;
        int m = grid.size();
        int n = grid[0].size();
        set <pair<int,int>> s;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1){
                    if(s.find(make_pair(i,j)) == s.end()){
                            
                    maxA = max(maxA, Solve(grid, i,j,s));
                    }
                    // cout<<Solve(grid,i,j,s)<<" ";
                
                    
                }
            }
        }
        
        return maxA;
    }
};