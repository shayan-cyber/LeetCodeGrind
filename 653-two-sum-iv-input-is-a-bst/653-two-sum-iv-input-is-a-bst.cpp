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
    vector<int> temp;
    void inorder(TreeNode* root){
        
        if(root == NULL)
            return;
        inorder(root-> left);
        temp.push_back(root -> val);
        inorder(root -> right);
        
    }
    
    
    bool findTarget(TreeNode* root, int k) {
        
        
        inorder(root);
        if(temp.size()< 2){
            return false;
        }
        
        for(int i=0; i<temp.size(); i++){
            int t = k - temp[i];
            int s =0;
            int e = temp.size()-1;
            while(s<=e){
                int mid = (s+e)/2;
                if(temp[mid] == t && mid != i){
                    return true;
                }
                    
                else if(temp[mid] > t){
                    e = mid-1;
                }else{
                    s = mid+1;
                }
                
            }
        }
        
        return false;
        
    }
};