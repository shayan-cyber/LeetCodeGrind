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
    vector<int> res;
    void solve(TreeNode* root){
        
        
        if(root == NULL)
            return ;
        queue <TreeNode*> q;
        
        q.push(root);
        
        
        while(!q.empty()){
            
            int l = q.size();
            int temp = INT_MIN;
            while(l--){
                
                auto t = q.front();
                q.pop();
                temp = max(temp, t-> val);
                if(t -> left){
                    q.push( t -> left);
                }
                
                if(t -> right){
                    q.push(t -> right);
                }
        
                
                
                
                
            }
            res.push_back(temp);
            
            
        }
        
        
        
        
    }
    
    vector<int> largestValues(TreeNode* root) {
        
        solve(root);
        return res;
        
        
        
    }
};