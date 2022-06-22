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
    bool flag = true;
    
    int height(TreeNode* root){
        
        if(root == NULL)
            return 0;
        
        int lH = height(root->left);
        int rH = height(root->right);
        if(abs(lH-rH) > 1)
            flag = false;
        return max(lH,rH) +1;
        
    }
    
//     bool solve(TreeNode* root){
//         if(root == NULL)
//            return  true;
//         int lH = height(root->left);
//         int rH = height(root->right);
//         if(abs(lH-rH) > 1)
//             return false;
        
//         return solve(root -> left) && solve(root->right);

        
//     }
    
    bool isBalanced(TreeNode* root) {
        // return solve(root);
        height(root);
        if(flag){
            return true;
        }else{
            return false;
        }
        
        
    }
};