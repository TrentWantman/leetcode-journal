// 198. House Robber
// Medium | Dynamic Programming
// https://leetcode.com/problems/house-robber/
// Time: O(n) | Space: O(1)

class Solution {
public:
    int rob(vector<int>& nums) {
    int rob1 = 0, rob2 = 0;        
        for (int num : nums){
            int robHere = max(num + rob2, rob1);
            rob2 = rob1;
            rob1 = robHere;
        }
        return rob1;
    }
};

/*
nums[i] += max(nums[i+2], nums[i+3]);
            nums[i+1] = max(nums[i])
*/
    