class Solution {
public:
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        
        int limit = 2000 + a+ b;
        set <int> vis;
        
        queue <pair<int,int>>q;
        for(auto it:forbidden ){
            vis.insert(it);
        }
        
        q.push({0,1});
        vis.insert(0);
        int ans =0;
        while(!q.empty()){
            int l = q.size();
            
            while(l--){
                pair<int,int> p = q.front();
                q.pop();
                
                int forward = p.second;
                int c = p.first;
                if(c == x)
                    return ans;
                
                int next ;
                if(forward){
                    next = c - b;
                    if(next>=0){
                        if(vis.find(next) == vis.end()){
                            q.push({next, 0});
                            vis.insert(next);
                        }
                    }
                        
                    
                    
                    
                }
                next = c+a;
                if(next<limit){
                    if(vis.find(next) == vis.end()){
                            q.push({next, 1});
                        vis.insert(next);
                    }
                }
                    
                
                
                
            }
            ans++;
            
            
        }
        
        return -1;
        
        
        
    }
};