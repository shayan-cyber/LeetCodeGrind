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
    int target ;
    
    void dfs(TreeNode* root, long long int sum){
        
        if(root == NULL)
            return;
        
        
        sum = sum + root->val;
        if(sum ==target){
            
            count++;
            // return ;
            dfs(root-> left, sum);
            dfs(root -> right, sum);
            
        }else{
            
            dfs(root-> left, sum);
            dfs(root -> right,sum);
            
            
        }
            
        
        
        
    }
    
    
    
    void bfs(TreeNode* root){
        if(root == NULL)
            return;
        
        queue<TreeNode*> q;
        q.push(root);
        
        
        while(!q.empty()){
            
            TreeNode* t = q.front();
            q.pop();
            
            dfs(t,0);
            
            if(t->left){
                q.push(t->left);
            }
            
            if(t->right)
                q.push(t->right)  ;      
                
        }
        
        
    }
    
    
    int pathSum(TreeNode* root, int targetSum) {
         target = targetSum;
        // dfs(root, targetSum);
        bfs(root);
        
    
        
        
        
        return count;
    }
};