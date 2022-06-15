class Solution {
public:
    string removeKdigits(string num, int k) {
        
        int n = num.length();
        stack <char> s;
        s.push(num[0]);
        
        if(num.length() <= k)   
            return "0";
        
        
        if(k == 0)
            return num;
        for(int i=1; i<n; ++i){
            
            while(k>0 && !s.empty() && num[i]<s.top() ){
                s.pop();
                --k;
                
            }
            
            
            s.push(num[i]);
            
            if(s.size() == 1 && num[i] == '0'){
                s.pop();
            }
            
        }
        
        
        while(k && !s.empty()){
            --k;
            s.pop();
        }
        string res ="";
        
        while(!s.empty()){
             res.push_back(s.top());
            s.pop();
            
        }
        
        reverse(res.begin(),res.end());
        if(res.length() == 0)
            return "0";
        
        return res;
    }
};