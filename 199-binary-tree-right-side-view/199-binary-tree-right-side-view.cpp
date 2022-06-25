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
    
    set <int> s;
    vector <int> ans;
    void help(TreeNode* root){
        if(root == NULL)
            return ;
        queue<pair<TreeNode*,int>> q;
        q.push(make_pair(root, 0));
        int count = 0;
        while(!q.empty()){
            TreeNode* v = q.front().first;
            int r = q.front().second;
            q.pop();
            if(r == count){
                ans.push_back(v->val);
                count++;
            }
            if(v-> right != NULL)
                q.push(make_pair(v-> right, count));
            if(v->left != NULL)
                q.push(make_pair(v->left, count));
            
            
        }
        
        
    }
    
    vector<int> rightSideView(TreeNode* root) {
        help(root);
        return ans;
    }
};