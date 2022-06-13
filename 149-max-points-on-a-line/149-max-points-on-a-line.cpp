class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        
        
        int n = points.size();
        int res= 1;
        
        for(int i=0; i<n; i++){
            int maxLocal = 0;
            unordered_map <double, int> mp;
            for(int j=i+1; j<n; j++){
                double slope;
                if((points[j][0] - points[i][0]) ==0){
                    slope = INT_MAX;
                }
               else slope = ((double)points[j][1] - (double)points[i][1])/((double)points[j][0] - (double)points[i][0]);
                
                // cout<<slope<<" ";
                if(mp.find(slope) == mp.end())
                    mp[slope] = 2;
                else
                    mp[slope]++;
                
                
                
                
                
            }
            
            
            
            
            for(auto it:mp){
                maxLocal = max(maxLocal,it.second);
            }
            
            res = max(res, maxLocal);
        }
        
      
        return res;
        
    }
};