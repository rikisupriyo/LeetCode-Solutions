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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if (!root) return {};
				vector<vector<int>> res;
				queue<TreeNode*> Q;
				Q.push(root);
				Q.push(NULL);
				vector<int> v;

				while(!Q.empty()) {
					TreeNode* temp = Q.front();
					Q.pop();
					if(!temp) {
						res.push_back(v);
						v.resize(0);
						if(!Q.empty()) Q.push(NULL);
					}

					else {
						v.push_back(temp->val);
						if(temp->left) Q.push(temp->left);
						if(temp->right) Q.push(temp->right);
					}
				}

				reverse(res.begin(), res.end());
				return res;
    }
};
