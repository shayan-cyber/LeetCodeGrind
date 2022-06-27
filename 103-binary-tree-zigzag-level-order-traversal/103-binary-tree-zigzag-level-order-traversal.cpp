/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *  int val;
 *  TreeNode * left;
 *  TreeNode * right;
 *  TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:

        vector<vector < int>> ans;
    void bfs(TreeNode *root)
    {

        if (root == NULL)
            return;

        queue<TreeNode*> q;
        q.push(root);
        bool flag = true;

        while (!q.empty())
        {

            int l = q.size();
           	// q.pop();
           	// ans.push_back(u->val);
            vector<int> temp;

            for (int i = 0; i < l; i++)
            {
                TreeNode *u = q.front();
                q.pop();
                temp.push_back(u->val);
                if (u->right)
                {
                    q.push(u->right);
                }
                if (u->left)
                {
                    q.push(u->left);
                }
            }
            
            if(flag){
                  reverse(temp.begin(), temp.end());
            }

            ans.push_back(temp);
            flag = !flag;
        }
    }

    vector<vector < int>> zigzagLevelOrder(TreeNode *root)
    {
        bfs(root);
        return ans;
    }
};