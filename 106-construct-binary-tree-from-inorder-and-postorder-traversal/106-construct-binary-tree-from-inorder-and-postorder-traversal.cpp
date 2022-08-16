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
    int postInd ;
    TreeNode* create(vector<int> & in, vector<int> post, int start, int end){
        if(start > end)
            return NULL;
        
        
        auto curr = new TreeNode(post[postInd]);
        postInd = postInd-1;
        int inInd = -1;
        for(int i=start; i<= end ; i++){
            if(curr -> val == in[i]){
                inInd= i;
                break;
            }
        }
        if(inInd == -1)
            return NULL;
        curr -> right = create(in, post, inInd +1, end);
        curr -> left = create(in, post, start, inInd-1);
        
        
        return curr;
        
    }
    
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        postInd= inorder.size()-1;
        return create(inorder, postorder,  0, inorder.size()-1);
        
        
    }
};