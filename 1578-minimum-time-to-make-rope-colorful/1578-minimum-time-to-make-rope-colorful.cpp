class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        
        int n = neededTime.size();
        int last = 0;
        int time =0;
        for(int i=1; i<n; i++){
            if(last <= n-1 && colors[i] == colors[last] ){
                if(neededTime[i] < neededTime[last]){
                    time = time+ neededTime[i];
                    
                    
                }else{
                    time =time+ neededTime[last];
                    last =i;
                }
                
            }else{
                last =i;
            }
        }
        
        return time;
        
    }
};