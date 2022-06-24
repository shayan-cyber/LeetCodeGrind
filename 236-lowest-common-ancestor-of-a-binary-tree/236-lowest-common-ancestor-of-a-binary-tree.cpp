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
    
    TreeNode* LCA(TreeNode* root, TreeNode* p, TreeNode * q){
        if(root == NULL || p-> val == root ->val || q -> val == root -> val)
            return root;
        
        
        TreeNode* Ls = LCA(root -> left, p, q);
        TreeNode* Rs = LCA(root ->right,p,q);
        
    
        
        if(Ls == NULL){
            return Rs;
        }
        if(Rs == NULL){
            return Ls;
        }
        
        return root;
    }
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return LCA(root,p,q);
    }
};