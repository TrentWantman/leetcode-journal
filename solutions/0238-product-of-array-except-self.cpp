// 238. Product of Array Except Self
// Medium | Array
// https://leetcode.com/problems/product-of-array-except-self/submissions/1959408341/
// Time: O(n) | Space: O(n)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> results(nums.size(), 1);
        // vector<int> suffix(nums.size(), 1);
        for(int i = 1; i < nums.size(); i++){
            results[i] = results[i-1] * nums[i-1];
        }

        int suffix = 1;
        for(int i = results.size()-1; i >= 0; i--){
            results[i] = (results[i] * suffix);
            suffix = nums[i] * suffix;
        }
        return results;
    }
};

/// [1, 2, 3, 4]
/// [1, 1, 2, 6]
// [ 24, 12, 4, 1]