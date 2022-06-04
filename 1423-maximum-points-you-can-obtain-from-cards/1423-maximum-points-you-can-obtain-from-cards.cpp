class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n= cardPoints.size();
        
        int sum =0;
        
        for(int i=0; i<n; i++){
            sum+=cardPoints[i];
        }
        
       
        
        cout<<sum;
        
        int sumK =0;
        for(int i=0; i<n-k; i++){
            sumK+=cardPoints[i];
        }
        int mn = INT_MAX;
        // cout<<mn<<" ";
        int i=0;
        int j = n-k;
        int temp= sumK;
        
        while(j<=n){
           
        
          
            mn = min(mn,temp );
              if(j == n)break;
            
            temp = temp - cardPoints[i] + cardPoints[j];
        
            i++;
            j++;
        }
       cout<<" "<<temp<<j;
        
        return sum - mn;
        
    }
};