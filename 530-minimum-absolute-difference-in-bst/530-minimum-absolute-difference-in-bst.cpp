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
    
    int prev = -100000;
    int diff = INT_MAX;
    
    void help(TreeNode* root){
        
        if(root == NULL)
            return ;
        help(root->left);
        diff = min(diff, abs(prev - root->val));
        prev = root->val;
        help(root -> right);
        
       
        
    }
    
    
    int getMinimumDifference(TreeNode* root) {
        help(root);
        return diff;
    }
};