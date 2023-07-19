//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void getSub(vector<int> arr,vector<int>& res, int n, int i, int sum){
        
        if(i==n){
            res.push_back(sum);
            return ;
        }
        
        
        getSub(arr, res, n, i+1, sum + arr[i]);
        getSub(arr, res , n, i+1, sum);
        
        
        
        return ;
        
        
        
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector <int> res;
        getSub(arr, res, N, 0, 0);
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends