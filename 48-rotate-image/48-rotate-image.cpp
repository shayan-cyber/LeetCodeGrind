class Solution {
public:
    
    void transpose(vector<vector<int>> & matrix){
        
        int n = matrix.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
    }
    
    
    void rotate(vector<vector<int>>& matrix) {
        
//         must be square matrix otherwise inplace exchange is not possible cause dimension of matrix will change
        int n = matrix.size();
        transpose(matrix);
        
//         take mirror of matrix about of columns
        
        
        for(int i=0; i<n/2; i++){
            for(int j=0; j<n; j++){
                
                swap(matrix[j][i], matrix[j][n-i-1]);
            }
        }
        
       
        
        
    }
};