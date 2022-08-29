class TimeMap {
public:
    unordered_map <string , vector<pair<int, string>>> mp;
    
    
    string search(vector<pair<int,string>> &vec, int t){
        
        
        int lo = 0;
        int hi = vec.size()-1;
        
        
        while(lo <= hi){
            
            int mid = (lo+hi)/2;
            if(vec[mid].first > t){
                
                hi = mid -1;
                
                
            }else if(vec[mid].first == t){
                return vec[mid].second;
                
            }else{
                lo = mid+1;
            }
            
            
            
        }
        if(hi>=0)
                return vec[hi].second;
            return "";
            
        
        
    }
    
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        
        mp[key].push_back({timestamp, value});
        
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key) == mp.end())
            return "";
        
        return search(mp[key], timestamp);
        
        
        
        
        
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */