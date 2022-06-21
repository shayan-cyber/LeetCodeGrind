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
    vector<string> ans;
    void dfs(TreeNode* root, string s){
        if(root == NULL){
            // ans.push_back(s);
             return ;
        }
           
        string s1 = s;
        string s2 = s;
        if(s1.length() >0){
            s1  = s1 + "->"+ to_string(root->val);
        }else{
            s1 = s1 + to_string(root->val);
        }
        
        
//         if(root->left == NULL && root -> right == NULL){
//             dfs(root ->left, s1);
//         }else{
            
//         }
//         if(root->right != NULL)
//         dfs(root->right, s1);
        // s.push_back(root -> left);
        
        if(root -> left == NULL && root -> right == NULL){
            ans.push_back(s1);
        }
        
        dfs(root ->left, s1);
        dfs(root ->right, s1);
    }
    
    
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root, "");
        return ans;
    }
};