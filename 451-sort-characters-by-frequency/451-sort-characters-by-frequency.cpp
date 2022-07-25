class Solution {
public:
    
    
    char asciiTochar(int n){
        
        return char(n);    
    }
    
    
    string frequencySort(string s) {
        
        
        priority_queue <pair<int, char>> pq;
        unordered_map <char, int> mymap;
        
        
        for(auto it : s){
            // int temp = it - 'a';
            mymap[it] ++;
        }
        
        
        for(auto it : mymap){
            if(it.second != 0){
                // int asc= i + 'a';
                pq.push({it.second,it.first});
            }
            
        }
        string res;
        while(!pq.empty()){
            
            char al = pq.top().second;
            int f = pq.top().first;
            pq.pop();
            
            while(f--){
                
                res.push_back(al);
            }
        }
        
        return res;
        
        
        
    }
};