class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        
        int n = nums.size();
        
        vector<pair<int,int>> v;
        
        for(int i=0; i<n; i++){
            for(auto it:nums[i]){
                v.push_back(make_pair(it, i));
            }
        }
        
        
        
        
        sort(v.begin(), v.end());
        // for(auto it:v){
        //     cout<<it.first<<" "<<it.second<<", ";
        // }
        
        
        unordered_map <int,int> mp;
        
        
        for(int i=0; i<n; i++){
            
            mp[i]++;
            
        }
        
        
        int count = n;
        int mn=INT_MAX;
        vector <int> ans;
        int low = 0;
        // int high = 0;
        
        for(int high =0; high<v.size(); high++){
            
            if(mp.find(v[high].second) != mp.end()){
                mp[v[high].second]--;
                if(mp[v[high].second] == 0){
                    count--;
                }
            }
            
            
            
            while(count == 0){
                
                if(mn > (v[high].first - v[low].first)){
                    mn = v[high].first - v[low].first ;
                    ans = {v[low].first ,v[high].first};
                }
                
                
                if(mp.find(v[low].second) != mp.end()){
                    
                    mp[v[low].second]++;
                    if(mp[v[low].second] ==1){
                        count ++;
                    }
                }
                low++;
                
            }
       
            
            
            
        }
        
        return ans;
        
        
        
        
    }
};