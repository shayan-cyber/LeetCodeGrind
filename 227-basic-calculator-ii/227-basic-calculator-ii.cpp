class Solution {
public:
    
    int stoi(char a){
        return a - '0';
    }
    int calculate(string s) {
        //first approach using stack
        int n = s.length();
        long long int lastnum =0;
        char lastop ='+';
        stack <int> st;
        
        for(int i=0; i<n; i++){
            char currchar = s[i];
            if(isdigit(currchar)){
                
                lastnum = lastnum*10 + currchar - '0';
                
            }
            if(!isdigit(currchar) && !iswspace(s[i]) || i == n-1){
                cout<<i<<" ";
                
                if(lastop=='+'){
                    
                    st.push(lastnum);
                    
                }else if(lastop =='-'){
                    
                    st.push(-lastnum);
                    
                }else if(lastop =='*'){
                    
                    int temp = st.top();
                    cout<<temp<<" "<<lastnum<<endl;
                    st.pop();
                    st.push(temp*lastnum);
                    
                }else if(lastop=='/'){
                    
                    int temp = st.top();
                    st.pop();
                    st.push(temp/lastnum);
                    
                }
                
                lastop = currchar;
                lastnum = 0;
            }
            
            
        }
        int res =0;
        while(!st.empty()){
            // cout<<st.top()<<" ";
            res +=st.top();
            st.pop();
        }
        
        return res;
        
        
        
        
    }
};