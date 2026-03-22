// 238. Product of Array Except Self
// Medium | Array
// https://leetcode.com/problems/product-of-array-except-self
// Time: O(n) | Space: O(1)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res (n, 1);

        for (int i = 1; i < n; i++){
            res[i] = res[i-1] * nums[i-1];
        }

        int suffix = 1;
        for (int i = n-1; i >= 0; i--){
            res[i] *= suffix;
            suffix *= nums[i];
        }
        return res;
    }
};

// [1, 2, 4, 6]
// [1, 1, 2, 8]
// [ 48,   24,  12,  8]