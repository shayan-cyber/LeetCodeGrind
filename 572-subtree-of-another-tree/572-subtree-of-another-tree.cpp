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
    
    bool isSameTree(TreeNode* s, TreeNode* t){
        
        if(s == NULL && t == NULL)
            return true;
        if(s == NULL|| t == NULL)
            return false;
        
        if(s->val == t->val){
            return isSameTree(s->left, t->left) && isSameTree(s->right, t->right);
        }
        return false;
        
        
    }
  
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
       return isSameTree(root, subRoot) || (root->left && isSubtree(root-> left, subRoot)) || (root->right && isSubtree(root->right, subRoot));
        
        
        
        
    }
};