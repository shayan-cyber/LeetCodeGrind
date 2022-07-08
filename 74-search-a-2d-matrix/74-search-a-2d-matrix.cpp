class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int startRow = 0;
        int endRow = matrix.size()-1;
        int rowSize = matrix[0].size();
        while(startRow <= endRow){
            int midRow = (startRow + endRow)/2;
            
            if(target >= matrix[midRow][0] && target <= matrix[midRow][rowSize-1]){
                
                int s = 0;
                int e = rowSize-1;
                while(s<=e){
                    
                    int mid = (s+e)/2;
                    
                    if(matrix[midRow][mid] == target){
                        return true;
                    }else if(matrix[midRow][mid] < target){
                        s = mid +1;
                    }else{
                        e = mid-1;
                    }
                    
                }
                return false;
                
                
            }else if(target<matrix[midRow][0]){
                endRow = midRow -1;
            }else if(target > matrix[midRow][rowSize-1]){
                startRow = midRow + 1;
            }
        }
        return false;
    }
};