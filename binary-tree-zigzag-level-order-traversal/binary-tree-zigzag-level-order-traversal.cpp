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

typedef vector<vector<int>> vvi;
typedef vector<int> vi;
typedef vector<TreeNode*> vt;
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vvi out;
        if (!root)
            return {};
        
        out.push_back({root->val});
        vt commit = {root};
        vt temp;
        vi value;
        
        while(!commit.empty()) {
            for (auto node : commit) {
                if (node->left) {
                    temp.push_back(node->left);
                    value.push_back(node->left->val);
                }
                if (node->right) {
                    temp.push_back(node->right);
                    value.push_back(node->right->val);
                }
            }
            if (value.size() > 0)
                out.push_back(value);
            value.clear();
            commit = temp;
            temp.clear();
        }
        
        int count = 0;
        for (vi &level : out) {
            if (count++ & 1 != 0)
                reverse(level.begin(), level.end());
        }
        return out;
    }
};