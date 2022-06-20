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
    
    unordered_map<TreeNode*,int> mp;
    
    int help(TreeNode* root){
        
        if(root  == NULL)
            return 0;
        if(mp.find(root) != mp.end())
            return mp[root];
        
        int with_root = root -> val;
        int without_root = 0;
        if(root -> left !=NULL){
            with_root = with_root + help(root->left->left) + help(root ->left ->right);
        } if(root ->right != NULL){
            with_root = with_root + help(root->right->left) + help(root->right->right);
        }
        
        without_root = help(root->right) + help(root ->left);
        
        int ans = max(with_root, without_root);
        mp[root]= ans;
        
        return ans;
        
        
    }
    
    
    int rob(TreeNode* root) {
        return help(root);
    }
};