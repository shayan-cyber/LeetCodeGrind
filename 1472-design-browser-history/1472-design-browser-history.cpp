class BrowserHistory {
public:
    struct Node{
        string val;
        Node* next;
        Node* prev;
        
        Node(string x){
            
            val = x;
            next = NULL;
            prev = NULL;
            
            
        }
    };
    
    Node* curr;
    Node* head;
    
    
    BrowserHistory(string homepage) {
        
        
        head = new Node(homepage);
        
        curr = head;
        
        
    }
    
    void visit(string url) {
        
        auto temp = new Node(url);
        
        curr -> next = temp;
        temp -> prev = curr;
        temp -> next = NULL;
        curr = temp;
        
    }
    
    string back(int steps) {
        
        int l = steps;
        auto temp = curr;
        while(l-- && temp -> prev){
            temp = temp -> prev;
        }
        curr = temp;
        return temp -> val;
        
        
        
    }
    
    string forward(int steps) {
        
        int l = steps ;
        auto temp = curr;
        while(l-- && temp -> next){
            temp = temp -> next;
            
        }
        
        curr  = temp;
        
        return temp -> val;
        
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */