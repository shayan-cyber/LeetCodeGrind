class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int s =1;
        int e = arr.size()-2;
        
        while(s<=e ){
            
            int mid = (s+ e)/2;
            
//             if(mid <1 && mid >= arr.size()-1){
//                 return -1;
                
//             }
            
        
                
                if(arr[mid-1] < arr[mid] && arr[mid]>arr[mid+1])
                 return mid;
            
                if(arr[mid-1] < arr[mid] && arr[mid]<arr[mid+1])
                    s =mid +1;
                
                else if(arr[mid-1]> arr[mid] && arr[mid]> arr[mid+1])
                    e = mid -1;
                
            
            
            
            
        }
        
        return -1;
        
    }
};