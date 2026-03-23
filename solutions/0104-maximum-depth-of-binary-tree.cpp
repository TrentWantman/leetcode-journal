// 104. Maximum Depth of Binary Tree
// Easy | Tree
// https://leetcode.com/problems/maximum-depth-of-binary-tree/
// Time: O(n) | Space: O(1)

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
    int maxDepth(TreeNode* root) {
        int level = 0;
        stack<pair<TreeNode*, int>> stk;
        stk.push({root, 1});

        while(!stk.empty()){
            pair<TreeNode*, int> stk_pair = stk.top();
            stk.pop();
            if (stk_pair.first != nullptr){
                level = max(stk_pair.second, level);
                stk.push({stk_pair.first->left, stk_pair.second + 1});
                stk.push({stk_pair.first->right, stk_pair.second + 1});
            }
        }
        return level;
    }
};
