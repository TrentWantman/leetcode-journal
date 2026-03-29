// 102. Binary Tree Level Order Traversal
// Medium | Tree
// https://leetcode.com/problems/binary-tree-level-order-traversal/submissions/1961760344/
// Time: O(n) | Space: O(n)

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
        vector<vector<int>> res;
        if (!root) return res;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int levelSize = q.size();
            vector<int> level;

            for (int i = 0; i < levelSize; i++){
                TreeNode* node = q.front();
                level.push_back(node->val);
                q.pop();
                if(node->left){
                    q.push(node->left); 
                }
                if(node->right){
                    q.push(node->right); 
                }
            }
            res.push_back(level);
        }
        return res;
    }
};