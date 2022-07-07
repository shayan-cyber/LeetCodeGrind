class StockSpanner {
public:
    
    
    int i ;
    stack <int> s;
    vector <int> v;
    StockSpanner() {
        i=0;
    }
    
    int next(int price) {
        
        v.push_back(price);
        while(!s.empty() && price >= v[s.top()]){
            s.pop();
        }
        int res;
        if(s.empty() && v.size() ==1){
            res= 1;
        }else if (s.empty() && v.size()>1){
            
            res = v.size();
        }else{
            res  = i - s.top();
        }
        
        s.push(i);
        i++;
        
        return res;
        
        
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */