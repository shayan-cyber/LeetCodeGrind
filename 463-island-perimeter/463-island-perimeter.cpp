class Solution {
public:
    int res =0;
    set <pair<int,int>> s;
    void help(int i,int j, int n,int m, vector<vector<int>> & grid){
        
        if(s.find({i,j}) != s.end())
            return;
        s.insert({i,j});
        
        
        int left = (j-1) >=0 ?  grid[i][j-1]:-1;
        int right =(j+1) <m ? grid[i][j+1]:-1;
        int top = (i-1) >=0 ? grid[i-1][j]:-1;
        int bottom =(i+1) <n ? grid[i+1][j]:-1;
        
        
        
        
        if(left != 1){
            res = res + 1;
        }
        if(right != 1){
            res = res +1;
        } if(top!= 1){
            res = res+1;
        }
        if(bottom!= 1){
            res = res +1;
        }
        
        
        
        if(left==1){
            help(i,j-1, n,m, grid);
        }
        if(right==1){
            help(i, j+1, n,m, grid);
        }
        if(top==1){
            help(i-1, j, n,m, grid);
        }
        if(bottom==1){
            help(i+1,j, n,m, grid);
        }
        return ;
        
        
    }
    
    
    int islandPerimeter(vector<vector<int>>& grid) {
//         find first cell
        
        int n = grid.size();
        if(n==0)
            return 0;
        int m = grid[0].size();
       
        bool flag = false;
        for(int i=0; i<n; i++){
            if(flag)
                break;
            for(int j =0; j<m; j++){
                if(grid[i][j]){
                    help(i,j, n,m, grid);
                    break;
                    flag= true;
                }
            }
        }
        
        
        return res;
    }
};