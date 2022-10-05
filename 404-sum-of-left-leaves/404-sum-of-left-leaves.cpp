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
    int sumOfLeftLeaves(TreeNode* root) {
        return traverse(root, 0, false);
    }
    
    int traverse(TreeNode* node, int leftSum, bool left) {
        int res = leftSum;
        if (left && node->left == nullptr && node->right == nullptr) {
            return node->val;
        }
        else {
            if (node->left != nullptr) res += traverse(node->left, leftSum, true);
            if (node->right != nullptr) res += traverse(node->right, leftSum, false);
        }
        return res;
    }
};