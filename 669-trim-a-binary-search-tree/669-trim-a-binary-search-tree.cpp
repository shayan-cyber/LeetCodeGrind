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
    
    vector<int> in;
    
    
    
    TreeNode* solve(TreeNode* root, int L, int H){

        if(root == NULL)
            return NULL;
        
        if(root -> val >= L && root -> val <= H){
            root -> right = solve(root -> right, L, H);
            root -> left = solve(root -> left, L, H);
            return root;
        }
        else if(root -> val < L){
            return solve(root -> right, L, H);
            
        }else {
            return solve(root -> left, L, H);
        }
        
       
            
        
        
        
        
    }
    
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        
        return solve(root, low, high);
        // return root;
        
    }
};