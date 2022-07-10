class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
//         brute force
//         priority_queue <int> pq;
        
//         for(int i=0; i<matrix.size(); i++){
//             for(int j=0; j<matrix[i].size(); j++){
//                 pq.push(matrix[i][j]);
//                 if(pq.size() > k)
//                     pq.pop();
                
//             }
//         }
//         return pq.top();
        
        
        
        int n = matrix.size();
        int start = matrix[0][0];
        int end = matrix[n-1][n-1];
        
        while(start<end){
            int mid = start + (end-start)/2;
           int count =0;
            for(int i=0; i<n ; i++){
                
                count = count + upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin(); 
            }
            if(count<k){
                start = mid+1;
            }else{
                end = mid;
            }
            
            
        }
        
        
        return start;
        
        
        
        
    }
};