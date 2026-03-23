// 226. Invert Binary Tree
// Easy | Tree
// https://leetcode.com/problems/invert-binary-tree/description/
// Time: O(n) | Space: O(h)

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr){
            return nullptr;
        }
        TreeNode* temp = invertTree(root->left);
        root->left = invertTree(root->right);
        root->right = temp;

        return root;
    }
};
