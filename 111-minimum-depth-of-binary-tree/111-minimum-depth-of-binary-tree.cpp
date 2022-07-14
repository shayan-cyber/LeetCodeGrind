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
    // int res =1;
    int dfs(TreeNode* root){
        
        if(root == NULL){
            
            return 0;
        }
        if(root -> left && root -> right)
         return min(1+ dfs(root -> left), 1+ dfs(root-> right));   
        if(root -> left){
            return 1+ dfs(root -> left);
        }else if(root -> right){
            return 1 + dfs(root -> right);
        }else{
            return 1;
        }
        
        
        
    }
    
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        if(root ->left && root -> right){
            cout<<"here1";
            return min(dfs(root-> left), dfs(root->right)) +1;
        }else if(root -> left){
            cout<<"here2";
            return 1+ dfs(root -> left);
        }else if(root -> right){
            cout<<"here3";
            return 1+ dfs(root -> right);
        }else{
            return 1;
        }

        
        // return res;
    }
};