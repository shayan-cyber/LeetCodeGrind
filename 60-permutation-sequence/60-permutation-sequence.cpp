class Solution {
public:
    string getPermutation(int n, int k) {
        
        int fact =1;
        vector<int> v;
        for(int i=1; i<n; i++){
            fact = fact*i;
            v.push_back(i);
            
        }
        v.push_back(n);
        
        k = k-1;
        string ans ="";
        while(true){
            ans = ans + to_string(v[k/fact]);
            v.erase(v.begin()+ k/fact);
            //the base condition is put here cause if we put it on top at some point v.size()==0 and it will cause error in fact = fact/v.size();
            if(v.size()==0){
                break;
            }
            
            k = k%fact;
            fact = fact/v.size();
            
            
            
        }
        
        
        return ans;
    }
};