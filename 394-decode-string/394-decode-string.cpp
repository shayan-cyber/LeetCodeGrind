class Solution {
public:
    string decodeString(string s) {
        
        stack <char> st;
        
        int n = s.length();
        string ans;
        
        for(int i=0; i<n; i++){
            if(s[i] != ']'){
                st.push(s[i]);
            }else{
                string curr ="";
                while(st.top() != '[' ){
                    curr =  st.top() + curr;
                    st.pop();
                }
                
                st.pop();
                
                string num = "";
                while(!st.empty() && isdigit(st.top())){
                    num = st.top() + num;
                    st.pop();
                }
                
                int k_num = stoi(num);
                
                while(k_num >0){
                    for(int j =0; j<curr.size(); j++){
                        st.push(curr[j]);
                    }
                    k_num --;
                }
                
                
            }
        }
        
        
        while(st.empty() == false){
            ans = st.top() + ans;
            st.pop();
        }
        
        return ans;
        
        
        
        
    }
};