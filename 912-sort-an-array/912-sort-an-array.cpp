class Solution {
public:
    vector<int> arr;
    void merge(int left, int right, int mid){
        
        vector<int> leftarr(mid-left+1);
        vector<int> rightarr(right-mid);
        
        for(int i=0; i<mid-left+1; i++){
            leftarr[i] = arr[left+i];
            
            
        }
        
        for(int i=0; i<right-mid; i++){
            
            rightarr[i] = arr[mid+i+1];
        }
        
        int i =0; int j =0; int k = left;
        
        while(i<mid-left+1 && j<right-mid ){
            if(leftarr[i]< rightarr[j]){
                arr[k] = leftarr[i]; 
                i++;
            }
            else{
                arr[k] = rightarr[j];
                j++;
            }
            k++;
            
            
        }
        while(i<mid-left+1){
            arr[k] = leftarr[i];
            i++;
            k++;
            
        }
        
        while(j<right-mid){
            arr[k] = rightarr[j];
            j++;
            k++;
        }

        
    }
    void mergesort( int start, int end){
        if(start >= end)
            return ;
        int mid = (start+ end)/2;
        
        mergesort( start, mid);
        mergesort( mid+1, end);
        merge(start,end, mid);
        
       
            
    }
    
    
    vector<int> sortArray(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        arr = nums;
        if(nums.size()== 1 || nums.size()==0)
            return nums;
        
         mergesort(0, nums.size()-1);
        
        return arr;
    }
};