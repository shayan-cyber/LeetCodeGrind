class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        
        unordered_map<int,int> mp;
        
        for(auto it: nums){
            // cout<<it<<" ";
            mp[it]++;
            
        }
        
        vector <int> ans;
        
        
        priority_queue <pair<int,int>> pq;
        
        
        
        for(auto i: mp){
            // cout<<i.first<<" "<<i.second<<endl;
            // if(it.second >= k)
            //     ans.push_back(it.first);
            
            pq.push({i.second, i.first});
        }
        
        while(!pq.empty() && k>0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        
        return ans;
    }
};