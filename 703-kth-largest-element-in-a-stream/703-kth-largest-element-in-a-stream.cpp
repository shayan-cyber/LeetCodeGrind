class KthLargest {
public:
    priority_queue <int, vector<int>, greater<int> > pq;
    vector<int> nums;
    int k;
    KthLargest(int n, vector<int>& vec) {
        
        k = n;
        nums = vec;
        
        
        for(auto it:nums){
            add(it);
        }
        
    }
    
    int add(int val) {
        
        if(pq.size()<k)
            pq.push(val);
        else{
            
            if(pq.top()< val){
                pq.pop();
                pq.push(val);
            }
            
            
        }
        return pq.top();
        
        
        
        
        
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */