class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector <int> ng(n,0);
        
        stack<int>s;
        
        for(int i=n-1; i>=0; i--){
            
            while(!s.empty() && temperatures[i]>= temperatures[s.top()]){
                s.pop();
            }
            
            if(!s.empty()){
                ng[i] = s.top()- i;
            }
            
            s.push(i);
            
            
        }
        
        return ng;
    }
};