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
    
    int preInd =0;
   
    TreeNode* solve(int start, int end, vector<int> & pre, vector<int> &in){
        
        
        if(start > end)
            return NULL;
        
        auto curr = new TreeNode(pre[preInd]);
        preInd  = preInd+1;
        int inInd=-1;
        for(int i =start; i<=end; i++){
            if(curr -> val == in[i]){
                inInd = i;
                break;
            }
        }
        if(inInd==-1)
            return NULL;
        
        
        curr -> left = solve(start, inInd -1, pre, in);
        
        curr -> right = solve(inInd+1, end, pre, in);
        return curr;
        
        
        
        
        
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        
        
       return  solve(0, pre.size()-1, pre, in);
        
        
        
    }
};