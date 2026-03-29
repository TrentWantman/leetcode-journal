// 572. Subtree of Another Tree
// Easy | Tree
// https://leetcode.com/problems/subtree-of-another-tree/
// Time: O(1) | Space: O(1)

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
    bool isSameTree(TreeNode* root, TreeNode* subroot){
        if(!root && !subroot){
            return true;
        }
        else if(!root || !subroot){
            return false;
        }
        else if(root->val != subroot->val){
            return false;
        }
        return (isSameTree(root->left, subroot->left) && isSameTree(root->right, subroot->right));
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root && !subRoot){
            return true;
        }
        else if(!root || !subRoot){
            return false;
        }
        if (isSameTree(root, subRoot)){
            return true;
        }
        else{
            return (isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot));
        }
    }
};