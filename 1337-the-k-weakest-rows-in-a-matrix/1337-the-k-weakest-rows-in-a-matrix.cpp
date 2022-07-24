class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        
        priority_queue <pair<int, int>> pq;
        int rowsize = mat.size();
        
        vector<int> mp(rowsize,0);
        
        for(int i=0; i< mat.size(); i++){
            
            int sol =0;
            
            for(int j=0; j<mat[i].size(); j++){
                
                
                if(mat[i][j] == 1)
                    sol++;
                
            }
            // cout<<sol<<" ";
          
            
            
            if(pq.size()< k)
                pq.push({sol,i});
            else{
                
                if(pq.top().first > sol){
                    // cout<<mp[pq.top().second]<<" "<<pq.top().second<<endl;
                    pq.pop();
                    pq.push({sol,i});
                }else if(pq.top().first == sol && pq.top().second > i){
                    pq.pop();
                    pq.push({sol, i});
                }
                    
                
            }
            
            
            
            
        }
        
        
        
        vector<int> res(k);
        
        while(!pq.empty() && k--){
            res[k] = pq.top().second;
            // cout<<pq.top()<<" ";
            pq.pop();
        }
        
        return res;
    }
};