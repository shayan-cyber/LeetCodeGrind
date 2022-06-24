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
    void help(TreeNode* root, int prev){
        if(root == NULL)
            return;
        if(prev <= root -> val){
            cout<<root->val<<" ";
            count++;
            
            
        }
        
        help(root-> left, max(root -> val, prev));
        help(root -> right, max(root -> val, prev));
           
        
        
    }
    
    
    int goodNodes(TreeNode* root) {
        
        help(root, INT_MIN);
        return count;
        
        
    }
};