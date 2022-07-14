class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
//         using hashmap(naive)
//         unordered_map <int,int> mp;
        
        
//         for(int i=0; i<edges.size(); i++){
            
//             mp[edges[i][0]] ++;
//             mp[edges[i][1]] ++;
            
            
//         }
        
        
        
//         for(auto it:mp){
//             if(it.second== edges.size())
//                 return it.first;
//         }
        
//         return -1;
        
        
        
        
        
//         using visited array
        
        
//         int n = edges.size();
//         int visited[n+2];
        
//         for(int i=0; i<n+2; i++){
//             visited[i] = 0;
//         }
        
        
//         for(int i=0; i<n; i++){
            
//             if(visited[edges[i][0]] ==0 ){
//                 visited[edges[i][0]]++;
//             }else{
//                 return edges[i][0];
//             }
            
            
            
//             if(visited[edges[i][1]] == 0){
//                 visited[edges[i][1]]++;
                
//             }else{
//                 return edges[i][1];
//             }
//         }
        
        
//         return -1;
        
        
//         best
        
        if(edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1])
            return edges[0][0];
        return edges[0][1];
        
        
        
        
    }
};