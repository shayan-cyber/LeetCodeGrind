class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        
        unordered_map <int,int> mp;
        
        for(int i=1; i<=n ; i++){
            mp[i]=0;
        }
        
        
        
        for(auto it : trust){
            mp[it[1]]++;
            
            
            
            
        }
        
        int res=0;
        
        for(auto i:mp){
            
            if(i.second== n-1){
                res = i.first;
            }
        }
        
        
        for(auto j:trust){
            if(j[0] == res){
                res = 0;
                break;
            }
        }
        if(res==0){
            return -1;
        }
        
        return res;
    }
};