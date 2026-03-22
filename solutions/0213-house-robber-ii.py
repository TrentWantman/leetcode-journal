# 213. House Robber II
# Medium | Array
# https://leetcode.com/problems/house-robber-ii/
# Time: O(n) | Space: O(1)

class Solution {
public:
    int rob(vector<int>& nums) {

        if (nums.size() == 1) return nums[0];

        int rob1 = 0, rob2 = 0;

        int robFirst = 0;
        int robLast = 0;
        for (int i = 0; i < nums.size() -1; i++){
            robFirst = max(nums[i] + rob2, rob1);
            rob2 = rob1;
            rob1 = robFirst;
        }

        rob1 = 0, rob2 = 0;
        for (int i = 1; i < nums.size(); i++){
            robLast = max(nums[i] + rob2, rob1);
            rob2 = rob1;
            rob1 = robLast;
        }
        return max(robFirst, robLast);
    }
};
