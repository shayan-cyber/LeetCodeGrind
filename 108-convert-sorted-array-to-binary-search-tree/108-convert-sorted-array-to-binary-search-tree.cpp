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
    
    TreeNode* help(int left, int right, vector <int> & arr){
        if(left > right){
            return NULL;
        }
        
        int mid = left + (right-left)/2;
        
        TreeNode* node = new TreeNode(arr[mid]);
        node -> left = help(left, mid-1, arr);
        node -> right = help(mid+1, right, arr);
        return node;
    }
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return help(0, nums.size()-1, nums);
        
    }
};