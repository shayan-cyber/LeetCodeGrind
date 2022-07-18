class Solution {
public:
    
    
    vector<int> parent;
    vector <int> rank;
    
  void makeset(){
        for(int i=0; i<parent.size(); i++){
            parent[i] =i;
            rank[i] =0;
        }
    }
    
    
    int findpar(int u){
        if(u == parent[u])
            return u;
        return parent[u] = findpar(parent[u]);
        
    }
    
    void uni(int u, int v){
        u = findpar(u);
        v = findpar(v);
        if(rank[u] < rank[v]){
            parent[u] = v;
        }else if(rank[u]> rank[v]){
            parent[v] =u;
        }else{
            parent[v] = u;
            rank[u]++;
            
        }
        
    }
    
    vector<vector<string>> accountsMerge(vector<vector<string>>& a) {
        
        unordered_map <string,int> mp;  
        int n = a.size();
        parent= vector<int> (n);
        rank =  vector<int> (n);
        makeset();
        
        for(int i=0; i<n; i++){
            
            for(int j=1; j<a[i].size(); j++){
                
                if(mp.find(a[i][j]) != mp.end()){
                    uni(i, mp[a[i][j]]);
                }else{
                    mp[a[i][j]] = findpar(i);
                }
            }
        }
        
        
        unordered_map<int ,vector<string>> newacc;
        
        for(auto it:mp){
        
            
                newacc[findpar(it.second)].push_back(it.first);
            

        }
            
        
            
        vector<vector<string>> res;
            
        for(auto jt:newacc){
            
            auto emails = jt.second;
            
            sort(emails.begin(), emails.end());
            
            emails.insert(emails.begin(), a[jt.first][0]);
            res.push_back(emails);
            
            
            
        }
        
        
        
        return res;
        
        
        
        
        
    }
};