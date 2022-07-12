class Solution
{
    public:
    
    
    
        void dfs(string &s, string &d, set<string>visited,unordered_map <string, vector<pair<string,double>>> &m , double &ans, double runningans){
            
            if(visited.find(s) != visited.end())
                return;
            
            else{
                if(s==d){
                    ans = runningans;
                    return ;
                }else{
                    visited.insert(s);
                    for(auto it:m[s]){
                        dfs(it.first, d,visited, m, ans, runningans*it.second );
                    }
                }
            }
            
            
            
        }
    
    
        vector<double> calcEquation(vector<vector < string>> &e, vector< double > &v, vector< vector< string>> &q) {
            
            
            unordered_map <string, vector<pair<string,double>>> m;
            
            for(int i=0; i<e.size(); i++){
                m[e[i][0]].push_back({e[i][1],v[i]});
                m[e[i][1]].push_back({e[i][0], 1/v[i]});
                
            }
            
             vector <double> res;
            for(int i=0; i<q.size(); i++){
                
                
                string s = q[i][0];
                string d = q[i][1];
                
                
                double ans =-1;
               
                double runningans = 1;
                set <string> visited;
                if(m.find(s) != m.end() || m.find(d) != m.end())
                    dfs(s,d,visited,m, ans, runningans);
                
                
                res.push_back(ans);
                    
            
                
                
            }
            
            
            
            
            
            return res;
            
            
            
        }
};