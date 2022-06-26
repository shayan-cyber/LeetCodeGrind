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
    
    bool help(TreeNode* root, long mn, long mx){
        
        if(root == NULL)
            return true;
        
        return(root -> val > mn && root -> val <mx && help(root->right, root->val, mx)  && help(root->left, mn, root->val));
        
        
    }
    
    
    bool isValidBST(TreeNode* root) {
        
        // long long int mx = 2e31 ;
        // long long int mn = - 2e31-1;
        
        return help(root, LONG_MIN, LONG_MAX);
        
    }
};