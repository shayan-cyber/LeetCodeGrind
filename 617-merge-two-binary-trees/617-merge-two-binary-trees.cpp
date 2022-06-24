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
    
    
    
    TreeNode* help(TreeNode* root1, TreeNode* root2){
        
        if(root1 == NULL && root2 == NULL){
             
            return NULL;
        }
        
        if(root1 != NULL && root2 != NULL ){
             int v = root2-> val + root1-> val;
            
             TreeNode* n = new TreeNode(v);
            
            n -> left = help(root1-> left, root2->left);
            n -> right = help(root1-> right, root2 -> right);
            return n;
        }
             
        else if(root1 != NULL){
            
            int v = root1-> val;
            TreeNode* n = new TreeNode(v);
            
            
            n -> left = help(root1-> left, root2);
            n -> right =  help(root1-> right, root2);
            return n;
            
        }else{
            
            int v = root2-> val;
            TreeNode* n = new TreeNode(v);
            
            n-> left =  help(root2-> left, root1);
            n -> right =  help(root2-> right, root1);
            return n;
            
        }
            
        
    } 
    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        
        // TreeNode* myRoot ;
        
     return help(root1,root2);
     
        
        
    }
};