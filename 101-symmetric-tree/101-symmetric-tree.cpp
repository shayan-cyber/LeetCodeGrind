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
    
    bool help(TreeNode* l, TreeNode* r){
        
        
        if(l == NULL && r == NULL)
            return true;
        if(l == NULL || r == NULL)
            return false;
        if(l -> val != r -> val)
            return false;
        
        
        return help(l->right, r->left) && help(l->left, r -> right);
        
    }
    
    
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        return help(root->left, root->right);
    }
};