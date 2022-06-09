class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.length();
        //first approach using extra space vector for invalid parenthesis.
        
//         stack <int> st;
//         vector <int> q;
        
//         for(int i=0; i<n; i++){
//             if(s[i] == ')'){
                
                
//                 if(!st.empty() ){
//                     st.pop();
//                 }else{
     
//                     q.push_back(i);
//                 }
                
//             }else if(s[i] == '('){
//                 st.push(i);
//             }
//         }
        
        
//         while(st.empty() == false){
//             int temp = st.top();
//             q.push_back(temp);
//             st.pop();
            
//         }

//         sort(q.begin(), q.end());
//         queue <int> qq;
//         for(int i=0; i<q.size() ;i++){

//             qq.push(q[i]);
//         }
//         string ans="";
        
//         for(int i=0; i<n; i++){
//             if(qq.front() == i){
              
//                 qq.pop();
//                 continue;
//             }
//             ans.push_back(s[i]);
            
//         }
        
        
//         return ans;
        
        
//         second approach using invalid char '#' for invalid parenthesis.
        
        stack <int> st;
      
        
        for(int i=0; i<n; i++){
            if(s[i] == ')'){
                
                
                if(!st.empty() ){
                    st.pop();
                }else{
     
                    s[i]='#';
                }
                
            }else if(s[i] == '('){
                st.push(i);
            }
        }
        
        
        while(st.empty() == false){
            int temp = st.top();
            s[temp] = '#';
            st.pop();
            
        }

        
        string ans="";
        
        for(int i=0; i<n; i++){
            if(s[i] == '#')
                continue;
            ans.push_back(s[i]);
            
        }
        
        
        return ans;
        
         
    }
};