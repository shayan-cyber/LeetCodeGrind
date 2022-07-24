class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        int n = stones.size();
        priority_queue <int> pq;
        
        for(int i=0; i<n; i++){
            
            pq.push(stones[i]);
            
        }
        
        
        while(!pq.empty()){
            
            if(pq.size() == 1){
            
                return pq.top();
            
            }else if(pq.size()>=2){
                
                int t1 = pq.top();
                pq.pop();
                int t2 = pq.top();
                pq.pop();
                if(t1 != t2){
                    pq.push(t1-t2);
                }
                
                
            }
        }
        return 0;
    }
};