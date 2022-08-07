class NumArray {
public:
    vector <int> nums;
    vector<int> seg;
    
      
    void build(int ind, int low, int high){
        
        if(low == high){
            seg[ind] = nums[low];
            return;
        }
        
        
        int mid = (low +high)/2;
        
        build(2*ind+1, low, mid);
        build(2*ind+2, mid+1, high);
        
        seg[ind] = seg[2*ind +1] + seg[2*ind +2];
        
    }
    
    
    NumArray(vector<int>& arr) {
        nums = arr;
        
        int n = arr.size();
        
        seg.resize(4*n);
        
        
        build(0, 0, n-1);
        
        
    }
    int query (int ind, int low, int high, int l, int r){
        
        if(low>= l && high <= r)
            return seg[ind];
        if(r < low || l > high)
            return 0;
        int mid = (low+high)/2;
        
        int left = query(2*ind +1 , low, mid, l,r);
        int right = query(2*ind +2, mid+1, high, l, r);
        return left+ right;
        
    }
    int sumRange(int left, int right) {
         
        return query(0, 0, nums.size()-1, left, right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */