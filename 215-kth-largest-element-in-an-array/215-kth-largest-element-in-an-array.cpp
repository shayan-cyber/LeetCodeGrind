class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue <int> pq;
        
        for(auto it:nums){
            pq.push(it);
        }
        
        
        int res;
        while(!pq.empty() && k--){
            res = (pq.top());
            pq.pop();
        }
        
        return res;
        
    }
};