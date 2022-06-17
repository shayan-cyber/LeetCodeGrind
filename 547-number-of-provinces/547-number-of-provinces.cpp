class Solution {
public:
    
    void dfs(int s, vector<int> arr[], bool visited[]){
        cout<<s<<" ";
        visited[s] = true;
        
        for(auto it : arr[s]){
            if(visited[it] == false){
               
                 dfs(it, arr, visited);
            }
        }
        
    }
    
    
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        
        int n = isConnected.size();
        int m = isConnected[0].size();
        
        vector<int> arr[n+1];
        
        for(int i=0; i<n ; i++){
            vector <int> temp;
            
            for(int j=0; j<n; j++){
                if(i != j && isConnected[i][j] == 1){
                    temp.push_back(j+1);
                }
            }
            
            arr[i+1] = temp;
        }
        
        
        
        bool visited[n+1];
        
        for(int i=1; i<=n; i++){

           visited[i] = false;

        }
        
        int res = 0;
        
        
        for(int i=1;i<n+1; i++){
            cout<<i<<": ";
          for(auto it: arr[i]){
              cout<<it<<" ";
          }
            
            cout<<endl;
              
              
        }
        
        
        for(int i=1; i<=n; i++){
            if(visited[i] == false){
                res++;
                dfs(i,arr, visited);
            }
        }
        
        return res;
        
    }
};