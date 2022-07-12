class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector <pair<int,int>> arr[n+1];
        unordered_set <int> vis;
        
        for(int i=0; i<times.size(); i++){
            arr[times[i][0]].push_back({times[i][1], times[i][2]});
        }
        
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
        pq.push({0,k});
        int t=0;
        while(!pq.empty()){
            if(vis.find(pq.top().second) != vis.end()){
                 pq.pop();
                continue;
              
            }
                
            else{
                vis.insert(pq.top().second);
                pair<int,int> temp = pq.top();
                t = max(temp.first, t);
                pq.pop();
                for(auto it: arr[temp.second]){
                    pq.push({temp.first + it.second, it.first});
                }
                
            }
        }
        if(vis.size()!= n)
            return -1;
        return t;
    }
};