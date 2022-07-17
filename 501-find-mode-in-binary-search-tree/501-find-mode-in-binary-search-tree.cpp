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
//     Naive approach
    // unordered_map <int, int> mp;
    
//     void dfs(TreeNode* root){
        
//         if(root == NULL)
//             return ;
//         mp[root -> val] ++;
//         dfs(root -> left);
//         dfs(root -> right);
        
        
        
        
//     }
    
    
//     vector<int> findMode(TreeNode* root) {
//         dfs(root);
//         vector<int> res ;
//         int freq =0 ;
//         for(auto it: mp){
//             if(it.second > freq){
//                 freq = it.second;
//             }
              
           
//         }
        
//          for(auto it: mp){
//             if(it.second == freq){
//                 res.push_back(it.first);
//             }
              
           
//         }
        
            
            
        
//         return res;
//     }
    
    
    
//     best approach
    
    
    int currfreq =0;
    int prev = INT_MAX;
    int mxfreq = INT_MIN;
    vector<int> res;
    
    
    void inorder(TreeNode* root){
        if(root == NULL)
            return;
        
        inorder(root -> left);
        if(root -> val == prev){
            currfreq++;
        }else{
            currfreq =1;
        
        }
        
        if(currfreq > mxfreq){
            res.clear();
            res.push_back(root-> val);
            
            mxfreq = currfreq;
            
        }else if(currfreq == mxfreq){
            res.push_back(root -> val);
        }
        prev = root -> val;
        inorder(root -> right);
        
        
        
    }
    
    
     vector<int> findMode(TreeNode* root) {
         
         inorder(root);
         return res;
         
         
     }
    
};