class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
        int count =0;
        vector <int> v(60,0);
        int n= time.size();
        
        for(int i=0; i<n; i++){
            if(time[i] % 60 ==0){
                count = count + v[0];
            }else{
                count = count + v[60-time[i]%60];
            }
            
            v[time[i]%60]++; 
        }
        return count;
    }
};