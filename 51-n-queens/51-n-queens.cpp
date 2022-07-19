class Solution {
public:
    
    
    bool isSafe(int row, int col, vector<string> &board, int n){
        
        int r= row;
        int c= col;
//         left
        
        while(col>=0){
            if(board[row][col] == 'Q')
                return false;
            col--;
        }
        
        
        row = r;
        col = c;
        
//         diagonally up
        
        while(col >=0 && row >=0){
            if(board[row][col] == 'Q')
                return false;
            col--;
            row--;
            
        }
        row = r;
        col = c;
        
        
        
        while(col >=0 && row <n){
            if(board[row][col] == 'Q')
                return false;
            col--;
            row++;
            
        }
        return true;
    }
    
    
    void solve( int col, vector<vector<string>> & ans, vector<string> &board, int n){
        if(col == n){
            ans.push_back(board);
            return ;
        }
        
        for(int row=0; row<n; row++){
            if(isSafe(row, col, board, n)){
                board[row][col] = 'Q';
                solve(col+1, ans, board, n);
                board[row][col] = '.';
            }
        }
        
    }
    
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n);
        vector<vector<string>>  ans;
        
        string s(n, '.');
        
        for(int i=0; i<n; i++){
            board[i] = s;
        }
        
        solve(0,ans, board, n );
        return ans;
        
        
    }
};