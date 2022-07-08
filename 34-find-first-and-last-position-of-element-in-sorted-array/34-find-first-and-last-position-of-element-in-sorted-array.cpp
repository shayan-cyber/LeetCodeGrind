class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int s = 0;
        int e= nums.size()-1;
        
        int indx = -1;
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid] == target){
                indx = mid;
                break;
                
            }else if(nums[mid] < target){
                s= mid +1;
            }else{
                e = mid-1;
            }
        }
        
        vector <int> res;
        
        if(indx == -1){
            return {-1,-1};
        }
        
        int start = indx;
        int end = indx;
        while(start>=0 && nums[start] == target ){
            start --;
        }
        
        while(end<nums.size() && nums[end]== target){
            end++;
        }
        res.push_back(start+1);
        res.push_back(end-1);
        return res;
        
        
        
    }
};