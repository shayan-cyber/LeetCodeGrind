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
    int res=INT_MAX;
    void bfs(TreeNode* root){
        
        if(root == NULL)
            return;
        queue <TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int sze = q.size();
            while(sze--){
                TreeNode* t = q.front();
                q.pop();
                if(t-> left){
                    q.push(t->left);
                    res = min(res, abs(t-> val  - t->left-> val));
                }
                if(t-> right){
                    q.push(t->right);
                    res = min(res, abs(t-> val - t->right-> val));
                }
                
            }
            
        }
        
        
    }
    
    vector<int> temp;
    void inorder(TreeNode* root){
        
        if(root == NULL)
            return;
        inorder(root-> left);
        temp.push_back(root -> val);
        inorder(root -> right);
        
    }
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        for(int i=1; i<temp.size(); i++){
            res = min(res, abs(temp[i]- temp[i-1]));
        }
        
        return res;
    }
};