//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    /*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    
    vector<int> solve(int v, vector<vector<int>>&e, int s){
        vector<int>dist(v,1e8);
        dist[s] =0;
        for(int i=0; i<v-1; i++){
            for(auto it:e){
                int t1 = it[0];
                int t2 = it[1];
                int w = it[2];
                
                if(dist[t1] != 1e8 && dist[t1] + w < dist[t2]){
                    dist[t2] = dist[t1] + w;
                }
            }
        }
        
        for(auto it:e){
            int t1 = it[0];
                int t2 = it[1];
                int w = it[2];
                
                if(dist[t1] != 1e8 && dist[t1] + w < dist[t2]){
                    return {-1};
                }
            
        }
        
        return dist;
        
        
    }
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        // Code here
        return solve(V, edges, S);
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, m;
        cin >> N >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src;
        cin >> src;

        Solution obj;
        vector<int> res = obj.bellman_ford(N, edges, src);

        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends