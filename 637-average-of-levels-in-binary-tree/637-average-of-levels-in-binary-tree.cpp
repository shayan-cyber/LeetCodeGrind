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
    
    vector<double> ans;
    void bfs(TreeNode* root){
        
        
        if(root == NULL)
            return;
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(!q.empty()){
            int l = q.size();
            int n = l;
            double sum =0;
            while(l--){
                TreeNode* t = q.front();
                q.pop();
                sum +=t-> val;
                
                if(t -> left != NULL)
                    q.push(t-> left);
                
                if(t -> right != NULL)
                    q.push(t-> right);
                
            }
            
            double temp = (double)sum/n;
            ans.push_back(temp);
            
        }
        
        
        
    }
    
    
    vector<double> averageOfLevels(TreeNode* root) {
        
        bfs(root);
        return ans;
        
    }
};