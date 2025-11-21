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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root) return result;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            int qlen = q.size();
            vector<int> level;
            for(int i = 0; i < qlen; i++)
            {
                TreeNode* Node = q.front();
                q.pop();
                if(Node != NULL)
                {
                    level.push_back(Node->val);
                    if(Node->left) q.push(Node->left);
                    if(Node->right) q.push(Node->right);
                }
            }
            result.push_back(level);
        }
        return result;
    }
};
