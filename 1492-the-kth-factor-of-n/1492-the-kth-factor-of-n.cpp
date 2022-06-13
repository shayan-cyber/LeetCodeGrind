class Solution {
public:
    int kthFactor(int n, int k) {
        
        int i = 1;
        vector <int> v;
        
        while(i<=n){
            
            if(n%i==0){
                v.push_back(i);
                
            }
            
            i++;
            
        }
        if(v.size()<k)
            return -1;
        
        return v[k-1];
        
    }
};