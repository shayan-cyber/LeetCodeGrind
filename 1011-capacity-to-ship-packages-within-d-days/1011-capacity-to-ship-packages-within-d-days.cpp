class Solution {
public:
    
    bool help(int mid, vector <int>& weights, int days){
        
        int count =1;
        int sum =0;
        
        for(int i=0; i<weights.size(); i++){
            sum = sum + weights[i];
            if(mid<sum){
                sum = weights[i];
                count++;
            }
            
            
            
        }
        
        if(count > days){
            return false;
        }
        return true;
        
        
    }
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        int min_cap=0;
        int max_cap=0;
        
        for(int i=0; i<weights.size(); i++){
            
            min_cap = max(min_cap, weights[i]);
            max_cap += weights[i];
        }
        
        
        int low = min_cap;
        int high = max_cap;
        
        int res ;
        
        while(low<=high){
            
            int mid = (low+high)/2;
            if(help(mid,weights,days)){
                res = mid;
                high = mid -1;
            }else{
                low = mid +1;
            }
            
            
        }
        
        return res;
        
    }
};