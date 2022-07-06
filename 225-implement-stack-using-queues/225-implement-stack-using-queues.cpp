class MyStack {
public:
    
    queue <int> q1;
    queue <int> q2;
    MyStack() {
        
    }
    
    void push(int x) {
        
        q1.push(x);
        
    }
    
    int pop() {
        int t = q1.front();
        // q1.pop();
        while(!q1.empty()){
            t = q1.front();
            q1.pop();
            q2.push(t);
            
        }
        
        
        while(!q2.empty()){
            int temp = q2.front();
            q2.pop();
            if(q2.empty()){
                break;
            }
            q1.push(temp);
            // q2.pop();
        }
        return t;
        
    }
    
    int top() {
        int t = q1.front();
        // q1.pop();
        while(!q1.empty()){
            t = q1.front();
            q1.pop();
            q2.push(t);
            
        }
        
        
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return t;
    }
    
    bool empty() {
        return q1.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */