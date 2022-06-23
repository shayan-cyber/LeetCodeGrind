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
    
    TreeNode* LCA(TreeNode* root, TreeNode* p, TreeNode* q){
        
        if(root == NULL || root -> val == p->val || root -> val == q->val)
            return root;
        TreeNode* LS = LCA(root-> left, p, q);
        TreeNode* RS = LCA(root-> right,p, q);
        
        if(LS == NULL)
            return RS;
        if(RS == NULL)
            return LS;
        return root;
        
    }
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        return LCA( root,  p,  q);
    }
};