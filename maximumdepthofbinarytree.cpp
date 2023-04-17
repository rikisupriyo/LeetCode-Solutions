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
    int levelOrder(TreeNode* root) {
        if (!root) return 0;
        queue<TreeNode*> Q;
        Q.push(root);
        int c = 0;
        while(!Q.empty()) {
            c++;
            int count = Q.size();
            for (int i=0; i<count; i++) {
                TreeNode* t = Q.front();
                Q.pop();
                if (t->left) Q.push(t->left);
                if (t->right) Q.push(t->right);
            }
        }
        return c;
    }

    int maxDepth(TreeNode* root) {
        return levelOrder(root);
    }
};
