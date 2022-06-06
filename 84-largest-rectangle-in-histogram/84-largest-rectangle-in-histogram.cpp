class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack <int> s1;
        s1.push(0);
        int ps[n];
        ps[0] = -1;
        
        for(int i=1; i<n;i++){
            while(!s1.empty() && heights[s1.top()] >= heights[i]){
                s1.pop();
            }
            if(s1.empty()){
                ps[i] = -1;
            }else{
                ps[i] = s1.top();
                
            }
            s1.push(i);
        }
        
        
        stack<int> s2;
        int ns[n];
        ns[n-1] = n;
        s2.push(n-1);
         for(int i=n-2; i>=0; i--){
             while(!s2.empty()  && heights[s2.top()]>= heights[i]){
                 s2.pop();
             }
             if(s2.empty()){
                 ns[i] = n;
             }else{
                 ns[i] = s2.top();
             }
             s2.push(i);
         }
        
        int res =0;
        for(int i=0; i<n; i++){
            int curr = heights[i];
            curr = curr + (i- ps[i]-1)*heights[i];
            curr = curr + (ns[i] - i -1)*heights[i];
            res = max(res, curr);
        }
        
        return res;
        
        
        
    }
};