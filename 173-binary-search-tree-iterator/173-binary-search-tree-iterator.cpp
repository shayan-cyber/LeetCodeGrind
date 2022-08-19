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
class BSTIterator {
public:
    vector<int> in;
    int itr;
    
    void inorder(TreeNode* root){
        
        if(root == NULL)
            return;
        
        
        
        
        inorder(root-> left);
        in.push_back(root -> val);
        inorder(root -> right);
        
        
        
        
    }
    
    
    
    BSTIterator(TreeNode* root) {
        inorder(root);
        itr = 0;
        
        
        
    }
    
    int next() {
        // itr++;
        return in[itr++];
        
    }
    
    bool hasNext() {
        
        if(itr < in.size())
            return true;
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */