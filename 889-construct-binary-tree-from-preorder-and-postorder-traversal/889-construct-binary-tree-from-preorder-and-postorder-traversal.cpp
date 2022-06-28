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
    
    
    int preIndex =0;
    
    TreeNode* build(int s, int e, vector<int> & preorder, vector<int> & postorder, unordered_map<int,int> & mp){
        
        if(s>e){
            return NULL;
        }
        
        TreeNode* n = new TreeNode(preorder[preIndex]);
        preIndex++;
        if(s== e){
            return n;
        }
        
        int postIndex = mp[preorder[preIndex]];
        
        n -> left = build(s, postIndex, preorder, postorder, mp);
        n-> right = build(postIndex+1, e-1, preorder, postorder,mp);
        return n;
            
        
        
        
        
        
    }
    
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        
        unordered_map <int,int> mp;
        
        for(int i=0; i<postorder.size(); i++){
            mp[postorder[i]] = i;
        }
        
        
        return build(0, preorder.size()-1, preorder, postorder, mp );
        
        
        
    }
};