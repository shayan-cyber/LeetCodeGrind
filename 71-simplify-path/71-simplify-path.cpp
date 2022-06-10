class Solution {
public:
    string simplifyPath(string path) {
        
        int  n = path.size();
        
        int i=0;
        stack<string>st;
        while(i<n){
            
            
            if(path[i]== '/'){
                
                i++;
                continue;
                
            }
            string temp="";
            
            
            while(i<n && path[i] !='/' ){
                temp+= path[i];
                i++;
            }
            
            if(temp == "."){
                i++;
                continue;
            }
            else if(temp == ".."){
                if(!st.empty()){
                    st.pop();
                }
            }else{
                st.push(temp);
            }
            
            
            i++;
            
            
        }
        string ans ="";
        while(!st.empty()){
            ans= "/" + st.top() + ans;
            // ans += st.top();
            st.pop();
        }
        
        if(ans.length()==0)
            return "/";
        return ans;
        
    }
};