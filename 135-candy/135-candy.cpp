class Solution {
public:
    int candy(vector<int>& ratings) {
        
        
        int n = ratings.size();
        
        vector <int> v(n,1);
        int count =0;
        
        for(int i=1; i<n; i++){
            if(ratings[i] > ratings[i-1] ){
                v[i] = v[i-1] +1;
            }
            
        }
        
        
        for(int i=n-2; i>=0; i--){
            if(ratings[i]>ratings[i+1]){
                v[i] = max(v[i+1]+1, v[i]);
            }
        }
        
        for(auto it:v){
            count+=it;
        }
        
        return count;
        
        
        
    }
};