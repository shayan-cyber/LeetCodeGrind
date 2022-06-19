 class Solution {
public:
     vector<int> ans;
     
        int count =0;
    void solve(vector<int> adj[], int v){
        
        vector <int> indegree(v,0);
        for(int i=0;i<v; i++){
            for(auto it:adj[i]){
                // cout<<it<<" ";
                indegree[it]++;
            }
        }
        
        
        queue<int> q;
        for(int i=0; i<v; i++){
            // cout<<i<<" "<<indegree[i]<<" ";
            if(indegree[i] == 0)
                q.push(i);
        }
        
        while(!q.empty()){
            int u = q.front();
            q.pop();
            ans.push_back(u);
            for(auto it:adj[u]){
                indegree[it]--;
                if(indegree[it] ==0){
                    q.push(it);
                    
                }
            }
            count++;
        }
        
        
    }
     
     
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        
        
        int n = prerequisites.size();
        if(n==0){
            for(int i=0;i<numCourses; i++){
                ans.push_back(i);
            }
            return ans;
        }
            
        int m = prerequisites[0].size();
        
        
        for(int i=0; i<n; i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        solve(adj,numCourses);
        
//         for(int i=0; i<n; i++){
            
//             cout<<i<<": ";
//             for(auto it:adj[i]){
//                 cout<<it<<" ";
//             }
//             cout<<endl;
//         }
        if(count != numCourses)
            return {};
        
        
        return ans;
       
        
    }
};