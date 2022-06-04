class Solution {
public:
    
    int Solve(vector<vector<int>> &grid, int i, int j){
        int m = grid.size();
        int n = grid[0].size(); 
        if(i<0|| j<0 || i>=m || j>=n || grid[i][j] == 0 ){
            return 0;
        }
        grid[i][j] = 0;
        // v[i][j]==1;
        

        return 1 + Solve(grid, i+1, j) + Solve(grid, i-1, j) + Solve(grid, i, j+1) + Solve(grid, i, j-1);
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int maxA = 0;
        int m = grid.size();
        int n = grid[0].size();
        // set <pair<int,int>> s;
        //instead of set we'll use visited matrix to decrease time complexity to find cause find of set takes O(logn) time
//         we can also optimize more cause visted array gives TLE ..we can modify grid[i][j] =0 if visted that way we'll not visit (go to solve function call) again
        // vector<vector<int>>v(m, vector<int>(n,0));
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1){
                    // if(v[i][j] ==0){
                            
                    maxA = max(maxA, Solve(grid, i,j));
                    // }
                    // cout<<Solve(grid,i,j,s)<<" ";
                
                    
                }
            }
        }
        
        return maxA;
    }
};