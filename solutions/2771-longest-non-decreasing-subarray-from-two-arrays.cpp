// 2771. Longest Non-decreasing Subarray From Two Arrays
// Medium | Dynamic Programming
// https://leetcode.com/problems/longest-non-decreasing-subarray-from-two-arrays/
// Time: O(n) | Space: O(n)

class Solution {
public:
    int maxNonDecreasingLength(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector<int> dp1 (n, 1);
        vector<int> dp2 (n, 1);
        int ans = 1;

        for (int i = 1; i < n; i++){
            if(nums1[i] >= nums1[i-1]) dp1[i] = max(dp1[i], 1 + dp1[i-1]);
            if(nums1[i] >= nums2[i-1]) dp1[i] = max(dp1[i], 1 + dp2[i-1]);
            if(nums2[i] >= nums2[i-1]) dp2[i] = max(dp2[i], 1 + dp2[i-1]);
            if(nums2[i] >= nums1[i-1]) dp2[i] = max(dp2[i], 1 + dp1[i-1]);
            ans = max(ans, max(dp1[i], dp2[i]));
        }
        return ans;
    }
};
 

// nums1  [7, 3, 6, 4, 5, 3, 4]
// nums2  [6, 2, 1, 4, 6, 7, 2]
// dp1    [1, 0, 0, 0, 0, 0, 0]
// dp2    [1, 0, 0, 0, 0, 0, 0]