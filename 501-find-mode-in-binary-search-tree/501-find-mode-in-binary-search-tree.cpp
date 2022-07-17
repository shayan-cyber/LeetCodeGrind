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
    
    unordered_map <int, int> mp;
    void dfs(TreeNode* root){
        
        if(root == NULL)
            return ;
        mp[root -> val] ++;
        dfs(root -> left);
        dfs(root -> right);
        
        
        
        
    }
    
    
    vector<int> findMode(TreeNode* root) {
        dfs(root);
        vector<int> res ;
        int freq =0 ;
        for(auto it: mp){
            if(it.second > freq){
                freq = it.second;
            }
              
           
        }
        
         for(auto it: mp){
            if(it.second == freq){
                res.push_back(it.first);
            }
              
           
        }
        
            
            
        
        return res;
    }
};