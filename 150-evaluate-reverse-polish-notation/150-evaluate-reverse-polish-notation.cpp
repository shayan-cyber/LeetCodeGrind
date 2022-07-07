class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack <int> s;
        int n = tokens.size();
        for(int i=0; i<n; i++){
            if(tokens[i] == "*" || tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "/"){
                
                if(tokens[i] == "*"){
                    int temp1 = s.top();
                    s.pop();
                    int temp2 = s.top();
                    s.pop();
                    
                    s.push(temp1 * temp2);
                }else if(tokens[i] == "/"){
                    int temp1 = s.top();
                    s.pop();
                    int temp2 = s.top();
                    s.pop();
                    
                    s.push(temp2 / temp1);
                }else if(tokens[i] == "+"){
                    int temp1 = s.top();
                    s.pop();
                    int temp2 = s.top();
                    s.pop();
                    
                    s.push(temp1 + temp2);
                }else{
                    int temp1 = s.top();
                    s.pop();
                    int temp2 = s.top();
                    s.pop();
                    
                    s.push(temp2 - temp1);
                }
                
                
            }else{
                s.push(stoi(tokens[i]));
            }
        }
        
        return s.top();
        
    }
};