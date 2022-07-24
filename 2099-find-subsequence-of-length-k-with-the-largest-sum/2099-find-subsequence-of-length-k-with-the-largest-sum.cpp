class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        priority_queue <pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>>> pq;
        for(int i=0; i<nums.size(); i++){
            if(pq.size() < k )
                pq.push({nums[i], i});
            else{
                
                if(nums[i] > pq.top().first){
                    pq.pop();
                    pq.push({nums[i],i});
                }
            }
            
        }
        
        
        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        
        sort(res.begin(), res.end());
        
        for(int i=0; i<res.size(); i++){
            // res[i] = nums[i];
            // cout<<res[i]<<" ";
            res[i] = nums[res[i]];
            
        }
        
        return res;
    }
};