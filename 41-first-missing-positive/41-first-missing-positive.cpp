class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        
        
        //first approach (brute force not ideal cause it'll take nlogn time in worst case)
        int n =nums.size();
        sort(nums.begin(), nums.end());
        int curr =1;
        
        for(int i=0; i<n; i++){
            if(curr > nums[i])
                continue;
            if(curr < nums[i])
                return curr;
            else
                curr++;
        }
        
        return curr;
        
        
    }
};