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
    int res=INT_MAX;
    
    
    vector<int> temp;
    int prev = INT_MAX;
    void inorder(TreeNode* root){
        
        if(root == NULL)
            return;
        inorder(root-> left);
        // temp.push_back(root -> val);
        if(prev != INT_MAX){
            res = min(res,abs(prev - root -> val)  );
        }
        prev = root-> val;
        inorder(root -> right);
        
    }
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        // for(int i=1; i<temp.size(); i++){
        //     res = min(res, abs(temp[i]- temp[i-1]));
        // }
        
        return res;
    }
};