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
    
    
    void inorder(TreeNode* root, stack<int> &st){
        
        if(root == NULL)
            return ;
        
        
       
        inorder(root->right, st);
        st.push(root->val);
        
         inorder(root->left, st);
        
        
    }
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        stack<int> st;
        inorder(root,st);
        vector <int> ans;
        while(!st.empty()){
            int u = st.top();
            ans.push_back(u);
            st.pop();
        }
        
        return ans;
    }
};