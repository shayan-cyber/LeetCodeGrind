class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.length();
        
        stack <int> st;
        vector <int> q;
        
        for(int i=0; i<n; i++){
            if(s[i] == ')'){
                
                
                if(!st.empty() ){
                    st.pop();
                }else{
                    // cout<<"here"<<i<<" "<<endl;
                    q.push_back(i);
                }
                
            }else if(s[i] == '('){
                st.push(i);
            }
        }
        
        
        while(st.empty() == false){
            int temp = st.top();
            q.push_back(temp);
            st.pop();
            
        }
        // cout<<q.size()<<endl;
        sort(q.begin(), q.end());
        queue <int> qq;
        for(int i=0; i<q.size() ;i++){
            // cout<<i<<" ";
            qq.push(q[i]);
        }
        string ans="";
        
        for(int i=0; i<n; i++){
            if(qq.front() == i){
                // cout<< s[qq.front()] <<qq.front()<<" ";
                qq.pop();
                continue;
            }
            ans.push_back(s[i]);
            
        }
        
        // cout<<endl;
        // cout<<q.size();
        return ans;
        
         
    }
};