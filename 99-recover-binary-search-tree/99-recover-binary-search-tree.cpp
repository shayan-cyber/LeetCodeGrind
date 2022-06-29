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
    
    
    // int prev = INT_MIN;
    
    TreeNode* firstMistake , * secondMistake, * pre;
    
    void help(TreeNode* root){
        
        if(root == NULL)
            return;
        
        help(root -> left);
        
        if(firstMistake == NULL && root -> val < pre -> val){
            firstMistake = pre;
            
        }
        
        if(firstMistake && root -> val < pre-> val){
            secondMistake = root;
        }
        
        
        pre = root;
        
        help(root -> right);
        
    }
    
    
    void recoverTree(TreeNode* root) {
        
        pre = new TreeNode(INT_MIN);
        
        help(root);
        
        swap(firstMistake->val, secondMistake -> val);
        
        
    }
};