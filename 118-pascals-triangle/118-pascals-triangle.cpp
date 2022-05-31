class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        
        vector <vector<int>> v;
        int n = numRows -1;
        v.push_back({1});
        if(n == 0){
            return v;    
        }
        v.push_back({1,1});
        if(n==1){
            return v;
        }
        
        
        
        for(int i=2; i<numRows; i++){
            vector <int> temp;
            for(int j=0; j<i+1; j++){
                if(j==0 || j== i){
                    temp.push_back(1);
                }else{
                    temp.push_back(v[i-1][j-1] + v[i-1][j]);
                }
            }
            v.push_back(temp);
            
            
        }
        
        return v;
        
        
        
        
        
    }
};