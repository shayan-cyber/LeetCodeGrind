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
    int widthOfBinaryTree(TreeNode* root) {
        
        
        if(root == NULL)
            return 0;
        
        
        queue <pair<TreeNode* , long long int>>q;
        q.push({root, 0});
        
        
        int res = 0;
        
        int start = 0;
        int end =0;
        
        
        while(!q.empty()){
            
            int l = q.size();
            start = q.front().second;
            end = q.back().second;
            
            res = max(res, end-start+1);
            
            for(int i=0; i<l; i++){
                
                pair<TreeNode*,long long int> p = q.front();
                q.pop();
                
                long long indx =p.second-start;
                
                if(p.first->left){
                    q.push({p.first->left, indx*2 +1});
                }
                if(p.first->right){
                    q.push({p.first->right, indx*2 +2});
                }
                
                
                
            }
            
            
        }
        
        
        return res;
        
    }
};