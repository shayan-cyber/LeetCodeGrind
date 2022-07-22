/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void solve(Node* root){
        
        if(root == NULL)
            return;
        queue <pair<Node*, int>> q;
        q.push({root, 0});
        
        while(!q.empty()){
            
            int l = q.size();
            
            while(l--){
                Node* t = q.front().first;
                int h = q.front().second;
                q.pop();
                
                if(!q.empty() && q.front().second == h){
                   
                    
                    t -> next = q.front().first;
                }
                
                
                if(t -> left){
                    q.push({t -> left, h+1});
                }
                if(t -> right){
                    
                    q.push({t-> right, h+1});
                }
                
                
                
                
            }
        }
        
        
        
    }
    
    
    Node* connect(Node* root) {
        solve(root);
        return root;
    }
};