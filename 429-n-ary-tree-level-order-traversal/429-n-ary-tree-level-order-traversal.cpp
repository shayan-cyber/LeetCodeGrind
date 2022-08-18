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
    
    vector <vector<int>> res;
    void solve(Node* root){
        if(root == NULL)
            return ;
        
        queue <Node*> q;
        
        q.push(root);
        
        while(!q.empty()){
            
            int l = q.size();
            vector<int> temp;
            while(l--){
                auto curr = q.front();
                q.pop();
                
                temp.push_back(curr-> val);
                
                for(auto it: curr -> children){
                    q.push(it);
                }
                
            }
            
            res.push_back(temp);
            
        }
        
    }
    
    vector<vector<int>> levelOrder(Node* root) {
        solve(root);
        return res;
        
        
    }
};