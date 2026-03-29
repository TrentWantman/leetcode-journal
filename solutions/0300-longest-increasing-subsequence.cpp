// 300. Longest Increasing Subsequence
// Medium | Array
// https://leetcode.com/problems/longest-increasing-subsequence/submissions/1963218244/?envType=problem-list-v2&envId=voxa048v
// Time: O(n^2) | Space: O(n)

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp (nums.size(), 0);
        dp[0] = 1;
        int longest = 1;
        for (int i = 1; i < nums.size(); i++){
            for(int j = 0; j < i; j++){
                if (nums[i] > nums[j]){
                    dp[i] = max(dp[i], dp[j] + 1);
                    longest = max(dp[i], longest);
                }
                else{
                    dp[i] = max(dp[i], 1);
                }
            }
        }
        return longest;
    }
};

//dp solution, somehow there is a binary solution, will attempt at a later point