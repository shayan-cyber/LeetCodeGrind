class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        
        
        int n = arr.size();
        
        if(n < k)
            return -1;
        
        
        int start = 0;
        int end = k-1;
        
        
        int curr = 0;
        
        for(int i=0; i<=end; i++){
            curr += arr[i];
        }
        // cout<<maxi;
        int maxi = curr;
        start = start+1;
        end = end+1;
        
        
        while(end < n){
            curr = curr + arr[end] - arr[start-1];
            maxi = max(maxi, curr);
            start ++;
            end ++;
            // cout<<end<< " "<<maxi<<endl;
            
            
            
            
        }
        
        double res= (double)maxi/k;
        // cout<< res;
        return res;
        
    }
};