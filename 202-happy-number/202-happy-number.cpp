class Solution {
public:
    bool isHappy(int n) {
        
        
        if(n==1){
            return true;
        }
        
        set <int> mp;
        
        int x= n;
        while(true){
            
            if(x==1){
                return true;
            }
            if(mp.find(x) != mp.end()){
                return false;
            }
            mp.insert(x);
            int temp =x;
            int temp2 =0;
            while(temp!= 0){
                temp2 = temp2 + (temp%10)*(temp%10);
                temp = temp/10;
                
            }
            
            x = temp2;
            
        }
        
    }
};