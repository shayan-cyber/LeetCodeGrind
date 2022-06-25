/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    void mark_parent(TreeNode* root,unordered_map <TreeNode*,TreeNode*> &parent_map ){
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* p = q.front();
            q.pop();
            if(p-> left){
                parent_map[p->left]= p;
                q.push(p->left);
                
            }
            if(p -> right){
                parent_map[p->right] = p;
            
                q.push(p->right);
            }
        }
    }
    
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
    
        unordered_map <TreeNode*,TreeNode*> parent_map;
        mark_parent(root, parent_map);
        set <TreeNode*> visited;
        visited.insert(target);
        queue<TreeNode*> q;
        
        q.push(target);
        
        int dist =0;
        while(!q.empty()){
            // TreeNode* curr = q.top();
            // q.pop();
            int l = q.size();
            if(dist == k)
                break;
            dist++;
            
            for(int i=0; i<l; i++){
                TreeNode* curr = q.front();
                q.pop();
                
                if(curr -> left != NULL && visited.find(curr->left) == visited.end()){
                    visited.insert(curr->left);
                    q.push(curr->left);
                }
                
                if(curr -> right != NULL && visited.find(curr->right) == visited.end()){
                    visited.insert(curr->right);
                    q.push(curr->right);
                }
                
                if(parent_map.find(curr) != parent_map.end() && visited.find(parent_map[curr]) == visited.end())
                {
                    visited.insert(parent_map[curr]);
                    q.push(parent_map[curr]);
                }
            }
        }
        
        
        vector <int> ans;
        
        while(!q.empty()){
            int s = q.front()-> val;
            q.pop();
            ans.push_back(s);
        }
        return ans;
        
        
    }
};