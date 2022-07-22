/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    bool bfs(TreeNode* root){
        if(root == NULL)
            return true;
        
        queue <TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int l = q.size();
            
            while(l--){
                
                TreeNode* curr = q.front();
                q.pop();
                
                if(curr -> left){
                    if(curr -> val == curr-> left -> val)
                    q.push(curr-> left);
                    else
                        return false;
                }
                if(curr -> right){
                    if(curr -> val == curr-> right -> val)
                    q.push(curr-> right);
                    else
                        return false;
                }
                
            }
            
        }
        return true;
    }
    
    
    
    bool isUnivalTree(TreeNode* root) {
        return bfs(root);
    }
};