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
    int height(TreeNode* root){
        
        if(root == NULL)
            return 0;
        return max(height(root->left) , height(root->right)) +1;
        
    }
    
    bool solve(TreeNode* root){
        if(root == NULL)
           return  true;
        int lH = height(root->left);
        int rH = height(root->right);
        if(abs(lH-rH) > 1)
            return false;
        
        return solve(root -> left) && solve(root->right);

        
    }
    
    bool isBalanced(TreeNode* root) {
        
        return solve(root);
        
        
    }
};