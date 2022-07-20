class Solution {
public:
    
    
//     using union find
//       vector<int> parent;
//     vector<int> rank;
    
    
//     void makeset(){
        
//         for(int i=0; i<parent.size(); i++)
//         {
//             parent[i] =i;
//             rank[i] =0;
//         }
//     }
    
    
//     int findpar(int node){
//         if(parent[node] == node)
//             return node;
//         return parent[node] = findpar(parent[node]); 
        
//     }
    
//     void uni(int s, int d){
        
//         s = findpar(s);
//         d = findpar(d);
        
//         if(rank[s] > rank[d]){
            
//             parent[d] =s;
            
//         }else if(rank[s]<rank[d]){
//             parent[s] =d;
//         }else{
//             parent[s] =d;
//             rank[d]++;
//         }
        
//     }
//     int numIslands(vector<vector<char>>& grid) {
        
//         int l = grid.size()*grid[0].size();
//         int n = grid.size();
//         int m = grid[0].size();
        
//         parent = vector<int> (l);
//         rank = vector<int> (l);
//         makeset();
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(grid[i][j] == '1'){
//                     if(j+1 < m && grid[i][j+1] == '1'){
//                         uni(m*i + j  , m*i + j+1 );
//                     }
//                     if( i+1< grid.size() && grid[i+1][j] == '1'){
//                         uni(m*i + j , m*(i+1) + j );
//                     }
//                 }
//             }
//         }
        
        
//         set <int> parents;

        
        
//         for(int i=0; i<grid.size(); i++){
//             for(int j=0; j<grid[i].size(); j++){
//                 if(grid[i][j] == '1'){
 
//                     parents.insert(findpar(i*m+j));
//                 }
                
//             }
//         }
        
//         return parents.size();
        
        
        
        
    // }
    
    
    
    
    
// using bfs
    
    
     void bfs(int i,int j,vector<vector<char>> &grid, int n, int m ){
        
        if(i<0 || j<0 || i>=n || j >= m){
            return ;
        }
        
        if(grid[i][j] == '2' || grid[i][j] == '0')
            return ;
        queue <pair<int,int>> q;
        q.push({i,j});
        grid[i][j] = '2';
         
         while(!q.empty()){
            
                 int ni = q.front().first;
                 int nj = q.front().second;
                 
                 q.pop();
                 
                 if(ni+1<n && grid[ni+1][nj] == '1'){
                     q.push({ni+1, nj}); 
                     grid[ni+1][nj] = '2';
                 }
                 
                 if(nj+1<m && grid[ni][nj+1] == '1'){
                     q.push({ni, nj+1});
                     grid[ni][nj+1] = '2';
                 }
                 if(nj-1>=0 && grid[ni][nj-1] == '1'){
                     q.push({ni, nj-1});
                     grid[ni][nj-1] ='2';
                 
                 }
                 
                 if(ni-1>=0 && grid[ni-1][nj] == '1'){
                     q.push({ni-1, nj});
                     grid[ni-1][nj] = '2';
                 }
                 
                 
                 
                 
             }
         
              
        
    }
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int count =0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == '1'){
                    bfs(i,j, grid, n,m);
                    
                    count++;
                    
                }
                    
                    
            }
        }
        
        
        return count;
    
    
    
    }
    
//     using dfs/ bfs
    
    
//     void dfs(int i,int j,vector<vector<char>> &grid, int n, int m ){
        
//         if(i<0 || j<0 || i>=n || j >= m){
//             return ;
//         }
        
//         if(grid[i][j] == '2' || grid[i][j] == '0')
//             return ;
//         grid[i][j] = '2';
        
//         //all 4 directions         
//         dfs(i, j+1, grid, n, m);
//         dfs(i, j-1, grid, n, m);
//         dfs(i+1, j, grid, n, m);
//         dfs(i-1, j, grid, n, m);
            
              
        
//     }
    
    
    
//     int numIslands(vector<vector<char>>& grid) {
        
//         int n = grid.size();
//         int m = grid[0].size();
        
//         int count =0;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(grid[i][j] == '1'){
//                     dfs(i,j, grid, n,m);
                    
//                     count++;
                    
//                 }
                    
                    
//             }
//         }
        
        
//         return count;
        
        
        
//     }
};