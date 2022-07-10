class Solution {
public:
    
    int calcDist(vector<int> & p){
        return p[0]*p[0] + p[1]*p[1];
        
        
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
        for(int i=0; i<points.size(); i++){
            
            pq.push({calcDist(points[i]),i});
            
        }
        
        
        
        vector <vector<int>> res;
        while(!pq.empty() && k--){
            
            res.push_back({points[pq.top().second]});
            pq.pop();
            
        }
        
        
        return res;
        
        
        
    }
};