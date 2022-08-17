class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        
        vector<int> in(n, 0);
        
        for(auto it: roads){
            
            in[it[0]]++;
            in[it[1]]++;
            
        }
        
        
        vector<pair<int,int>> temp;
        
        
        for(int i=0; i<n; i++){
            temp.push_back({in[i], i});
        }
        
        sort(temp.begin(), temp.end());
        unordered_map <int,int> mp;
        int k = n;
        for(int i=n-1; i>=0; i--){
            
            // cout<<temp[i].second<< " "<<k<<endl;
            mp[temp[i].second] = k;
            k--;
        }
        long long int ans =0;
        for(auto it:roads){
            
            ans = ans + mp[it[0]] + mp[it[1]];
            
        }
        
        return ans;
    
    
    }
};