/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    
  // vector <bool> visited(103, false);
    
    
    
    Node* help(Node * curr, unordered_map<Node*, Node*>& mp){
        
        vector <Node*> ne;
      
        Node* clone =new Node(curr->val);
          mp[curr] = clone;
        
         

        for(auto it: curr-> neighbors){ 

         if(mp.find(it) == mp

.end())
             {
             
             
             ne.push_back(help(it, mp));
             
         }else{
             ne.push_back(mp[it]);
         }

          

        

        }
        clone -> neighbors = ne;
        return clone;
        
    }
    
    
    
    
    Node* cloneGraph(Node* node) {
       
        
       unordered_map<Node*, Node*> mp;
        
        if (node == NULL)
            return NULL;
        if(node-> neighbors.size() == 0)
            {
            
            
            Node* clone = new Node(node -> val);
            
            return clone;
        }
        
        
       return  help(node, mp);
        
        
       
        
        
        
        
        
        
    }
};