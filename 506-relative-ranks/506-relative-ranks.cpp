class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue <pair<int, int>> pq;
        
        
        for(int i=0; i<score.size(); i++){
            pq.push({score[i], i});
            
        }
        
        vector<string> res(score.size());
        int i=1;
        while(!pq.empty()){
            pair<int,int> it = pq.top();
            pq.pop();
            
            if(i==1){
                res[it.second] = "Gold Medal";
            }else if(i==2){
                res[it.second] = "Silver Medal";
            }else if(i==3){
                res[it.second] = "Bronze Medal";
            }else{
                res[it.second] = to_string(i);
            }
            
            
            i++;
            
            
        }
        return res;
        
        
    }
};