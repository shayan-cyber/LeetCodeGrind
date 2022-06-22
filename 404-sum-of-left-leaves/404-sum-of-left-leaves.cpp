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
    int count =0;
    void help(TreeNode* root, bool flag){
        
        if(root == NULL)
            return ;
        if(flag){
            if(root->left == NULL && root ->right == NULL)
                count = count + root -> val;
        }
        help(root-> right, false);
        help(root ->left, true);
        
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        help(root, false);
        return count;
    }
};