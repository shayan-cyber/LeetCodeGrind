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
  
    int dx =-1;
    int dy = -1;
    TreeNode* px = NULL;
    TreeNode* py = NULL;
    bool solve(TreeNode* root, int x, int y){
        if(root == NULL)
            return false;
        queue <pair<TreeNode*, int>> q;
        q.push({root, 0});
        
        while(!q.empty()){
            int l = q.size();
            while(l--){
                
                pair<TreeNode*, int> curr = q.front();
                q.pop();
                int currh = curr.second;
                TreeNode* currn = curr.first;
                // if(currn -> val == x){
                //     dx = currh;
                // }
                // if(currn -> val == y){
                //     dy = currh;
                // }
                if(dx != -1 && dy !=-1)
                    return dx == dy && px != py ;
                
                
                if( currn -> left){
                    
                    if(currn -> left -> val ==x ){
                        dx = currh+1;
                        px = currn;
                    }
                    if(currn -> left -> val ==y){
                        dy = currh+1;
                        py = currn;
                    }
                    
                    
                    q.push({currn-> left, currh+1});
                    
                }
                if( currn -> right){
                    
                     if(currn -> right -> val ==x ){
                        dx = currh+1;
                        px = currn;
                    }
                    if(currn -> right -> val ==y){
                        dy = currh+1;
                        py = currn;
                    }
                    
                    q.push({currn-> right, currh+1});
                    
                }
                
                
            }
        }
        return false;
    }
    
    
    bool isCousins(TreeNode* root, int x, int y) {
        if(x == y)
            return false;
        return solve(root, x,y);
    }
};