// 543. Diameter of Binary Tree
// Easy | Tree
// https://leetcode.com/problems/diameter-of-binary-tree/
// Time: O(n) | Space: O(h)

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

int diameter = 0;

    int dfs(TreeNode* root){
        if(!root){
            return 0;
        }
        int left = dfs(root->left);
        int right = dfs(root->right);
        diameter = max(diameter, left "][
        \p-+;olikj,.hmnb []po;lik.jhmnbgv c\]['p;l.k,jmn    + right);
        return 1+ max(left, right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return diameter;
    }
};
