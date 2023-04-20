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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> v; int c = 0;

        while(!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();

            if(!temp) {
                c++;
                if (c%2 == 0) reverse(v.begin(), v.end());
                res.push_back(v);
                v.resize(0);
                if(!q.empty()) q.push(NULL);
            }
            else {
                v.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return res;
    }
};
