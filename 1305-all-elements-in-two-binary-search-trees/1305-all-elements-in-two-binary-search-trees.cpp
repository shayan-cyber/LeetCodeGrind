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
    
    
    void in(TreeNode* root, vector<int> & v){
        if(root == NULL)
            return ;
        
        
        
        in(root -> left,v);
        v.push_back(root -> val);
        in(root -> right, v);
        
        
        
        
        
    }
    
    vector<int> res;
    
    void merge(vector<int> & v1, vector<int> &v2){
        
        
        int i =0;
        int j =0;
        
        int n1 = v1.size();
        int n2 = v2.size();
        
        
        while(i < n1 && j <n2){
            
            if(v1[i] < v2[j]){
                res.push_back(v1[i]);
                i++;
            }else if(v2[j] <= v1[i]){
                res.push_back(v2[j]);
                j++;
            }
        }
        
        while(i<n1){
            res.push_back(v1[i]);
            i++;
            
        }
        while(j<n2){
            res.push_back(v2[j]);
            j++;
            
        }
        
        
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        in(root1, v1);
        
        vector<int> v2;
        in(root2, v2);
        merge(v1, v2);
        
        
        return res;
        
        
        
    }
};