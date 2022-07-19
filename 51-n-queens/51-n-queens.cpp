class Solution
{
    public:
       	//     first approach

       	//     bool isSafe(int row, int col, vector<string> &board, int n){

       	//         int r= row;
       	//         int c= col;
       	//	//         left

       	//         while(col>=0){
       	//             if(board[row][col] == 'Q')
       	//                 return false;
       	//             col--;
       	//         }

       	//         row = r;
       	//         col = c;

       	//	//         diagonally up

       	//         while(col >=0 && row >=0){
       	//             if(board[row][col] == 'Q')
       	//                 return false;
       	//             col--;
       	//             row--;

       	//         }
       	//         row = r;
       	//         col = c;

       	//         while(col >=0 && row < n){
       	//             if(board[row][col] == 'Q')
       	//                 return false;
       	//             col--;
       	//             row++;

       	//         }
       	//         return true;
       	//     }

       	//     void solve(int col, vector<vector < string>> &ans, vector<string> &board, int n){
       	//         if(col == n){
       	//             ans.push_back(board);
       	//             return ;
       	//         }

       	//         for(int row=0; row < n; row++){
       	//             if(isSafe(row, col, board, n)){
       	//                 board[row][col] = 'Q';
       	//                 solve(col+1, ans, board, n);
       	//                 board[row][col] = '.';
       	//             }
       	//         }

       	//     }

       	//     vector<vector < string>> solveNQueens(int n) {
       	//         vector<string> board(n);
       	//         vector<vector < string>>  ans;

       	//         string s(n, '.');

       	//         for(int i=0; i < n; i++){
       	//             board[i] = s;
       	//         }

       	//         solve(0,ans, board, n);
       	//         return ans;

       	//     }

       	//     optimized approach

        void solve(int col, vector<vector < string>> &ans, vector< string > &board, int n, 
                  vector<int> &left, vector<int> &lowerdiagonal,   vector<int> &upperdiagonal)
        {
            if (col == n)
            {
                ans.push_back(board);
                return;
            }

            for (int row = 0; row < n; row++)
            {
                if (left[row] == 0 && lowerdiagonal[row + col] == 0 && upperdiagonal[n-1 + col-row]==0)
                {   
                    board[row][col] = 'Q';
                    left[row]= 1;
                    lowerdiagonal[row + col]= 1;
                    upperdiagonal[n-1 + col-row]= 1;
                    
                    
                    solve(col + 1, ans, board, n, left, lowerdiagonal,upperdiagonal);
                    board[row][col] = '.';
                    
                    left[row]= 0;
                    lowerdiagonal[row + col]= 0;
                    upperdiagonal[n-1 + col-row]= 0;
                }
            }
        }

    vector<vector < string>> solveNQueens(int n)
    {

        vector<string> board(n);
        vector<vector < string>> ans;

        string s(n, '.');

        for (int i = 0; i < n; i++)
        {
            board[i] = s;
        }
        vector<int> left(n, 0);
        vector<int> lowerdiagonal(2*n - 1, 0);
        vector<int> upperdiagonal(2*n - 1, 0);

        solve(0, ans, board, n, left, lowerdiagonal, upperdiagonal);
        return ans;
    }
};