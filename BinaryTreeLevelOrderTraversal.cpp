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
        if (!root) return {};
        vector<vector<int>> res;
        queue<TreeNode*> Q;
        Q.push(root);
        while (!Q.empty()) {
          int count = Q.size();
          vector<int> nodes;
          for (int i=0; i<count; i++) {
            TreeNode* p = Q.front();
            Q.pop();
            if (p->left) Q.push(p->left);
            if (p->right) Q.push(p->right);
            nodes.push_back(p->val);
          }
          res.push_back(nodes);
        } 
        return res;
    }
};
