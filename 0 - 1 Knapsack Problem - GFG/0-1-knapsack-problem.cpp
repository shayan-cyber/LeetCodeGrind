//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int solve(int W, int wt[], int val[], int n, int ind, int curr, vector<vector<int>>&mt){
        
       if(ind >= n)
       return 0;
       
       if(mt[ind][curr] != -1)
        return mt[ind][curr];
       
       if(curr > W){
           
            return 0;
         
       }
       if(curr+wt[ind]<=W)
       return mt[ind][curr] = max(solve(W,wt, val, n, ind+1, curr + wt[ind], mt) + val[ind], solve(W,wt, val, n, ind+1, curr, mt));
        return solve(W,wt, val, n, ind+1, curr, mt);
        
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> mt(n+1, vector<int>(W+1,-1));
       return solve(W,wt,val,n,0, 0, mt);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends