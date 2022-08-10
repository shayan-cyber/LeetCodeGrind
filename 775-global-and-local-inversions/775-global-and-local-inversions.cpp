class Solution
{
    public:

        int merge(vector<int> &arr, vector<int> &temp, int l, int m, int r)
        {

            long long int inv_count = 0;
            int i = l;
            int j = m;
            int k = l;
            
            
            while(i< m && j <=r){
                
                if(arr[i] <= arr[j]){
                    temp[k] = arr[i];
                    i++;
                    k++;
                }else{
                    
                    temp[k] = arr[j];
                    k++;
                    j++;
                    inv_count = inv_count + m-i;
                    
                }
                
            }
            
            while(i<m){
                temp[k] = arr[i];
                i++;
                k++;
            } 
            while(j<=r){
                temp[k] = arr[j];
                j++;
                k++;
            }
            
            for(i = l ; i <= r ; i++)
                arr[i] = temp[i];
            
            return inv_count;
        }

    int mergeSort(vector<int> &nums, vector<int> &temp, int left, int right)
    {

        long long int inv_count = 0;

        if (left < right)
        {

            int mid = (left + right) / 2;
            inv_count += mergeSort(nums, temp, left, mid);
            inv_count += mergeSort(nums, temp, mid + 1, right);
            inv_count += merge(nums, temp, left, mid+1, right);
        }
        return inv_count;
    }

    bool isIdealPermutation(vector<int> &nums)
    {

        int n = nums.size();
        vector<int> temp (n);
        vector<int> arr = nums;
        long long int gi = mergeSort(nums,temp, 0, n-1);
        //cout<<gi<<endl;
        long long int li =0;
        // vector<int> arr = nums;
        for(int i=1; i<n; i++){
            
            if(arr[i-1]> arr[i]){
                li++;
            }
            
        }
        
        return li==gi;
        
        
        
        
        return false;
    }
};