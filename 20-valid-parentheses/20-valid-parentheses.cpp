class Solution {
public:
    bool solve(string s){
    
        
        stack <char> st;
        
        for(auto it : s){
            if(it == '(' || it == '{' || it == '['){
                st.push(it);
            }else {
                
                if(st.empty() == true)
                    return false;
                if(it == ')')
                {
                    if(st.top() == '(')
                        st.pop();
                    else{
                        return false;
                    }
                        
                }else if(it == '}')
                {
                    if(st.top() == '{')
                        st.pop();
                    else{
                        return false;
                    }
                        
                }else if(it == ']')
                {
                    if(st.top() == '[')
                        st.pop();
                    else{
                        return false;
                    }
                        
                }
                
            }
        }
        
        return st.empty();
        
    }
    
    
    bool isValid(string s) {
        
        return solve(s);
        
        
    }
};