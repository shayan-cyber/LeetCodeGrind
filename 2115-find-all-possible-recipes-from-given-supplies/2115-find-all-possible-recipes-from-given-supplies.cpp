class Solution {
public:
    
    vector <string> res;
    void help(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies){
        unordered_map <string,vector<string>> mp;
        
        for(int i=0; i<supplies.size(); i++){
            mp[supplies[i]] ={};
        }
        
        
        for(int i=0; i<ingredients.size(); i++){
            
            string r = recipes[i];
            
            for(int j=0; j<ingredients[i].size(); j++){
                if(mp.find(ingredients[i][j]) == mp.end()){
                    
                    mp[ingredients[i][j]] = {};
                    
                }
                    mp[ingredients[i][j]].push_back(r);
                
            }
        }
        
        
        unordered_map <string, int> ind;
        
        for(auto it:supplies){
            ind[it] = 0;
        }
        for(auto it : mp){
            
            for(auto jt: it.second){
               ind[jt]++;  
            }
        }
        
        
       queue <string> q;
        
        for(auto it: ind){
            if(it.second ==0)
                q.push(it.first);
        }
        
        int count = supplies.size();
        
        while(!q.empty()){
            
            string t = q.front();
            q.pop();
            if(count<=0)
            res.push_back(t);
            for(auto it:mp[t]){
                ind[it]--;
                if(ind[it] ==0)
                    q.push(it);
            }
            
            count--;
            
        }
        
        
        
        
        
    }
    
    
    
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        
        help(recipes, ingredients,supplies );
    
        return res;
        
    }
};