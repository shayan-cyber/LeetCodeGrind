/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    int depth = 0;
    void trav(Node* root, int h){
        
        if(root== NULL)
            return;
        
        depth = max(depth, h);
        
        for(auto it: root -> children){
            trav(it, h+1);
            
        }
        
    }
    
    
    int maxDepth(Node* root) {
        if(root == NULL)
            return 0;
        trav(root, 1);
        
        
        return depth;
    }
};