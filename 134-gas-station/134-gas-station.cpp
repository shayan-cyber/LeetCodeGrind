class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n = cost.size();
        
        int total_gas = 0;
        int total_cost = 0;
        
        for(int i=0; i<n;i++){
            total_gas += gas[i];
            total_cost +=cost[i];
        }
        
        if(total_gas<total_cost)
            return -1;
        
        int tank =0;
        int start =0;
        for(int i=0;i<n; i++){
            
            
            
            if(tank<0){
                start =i;
                tank =0;
            }
            tank = tank + gas[i] - cost[i];
        }
        
        return start;
        
    }
};