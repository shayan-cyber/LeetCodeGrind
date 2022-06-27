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
    vector <vector<int>> ans;
    
    void bfs(TreeNode* root){
        
        if(root == NULL)
            return;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            // TreeNode* u = q.front();
            int l = q.size();
            // q.pop();
            
            vector<int> temp;
            for(int i=0; i<l;i++){
                TreeNode* u = q.front();
                q.pop();
                temp.push_back(u->val);
                
                if(u-> left){
                    q.push(u->left);
                }
                
                if(u->right){
                    q.push(u->right);
                }
                
                
            }
            
            ans.push_back(temp);
        }
        
        
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        bfs(root);
        return ans;
    }
};