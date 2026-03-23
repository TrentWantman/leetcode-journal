// 217. Contains Duplicate
// Easy | Array
// https://leetcode.com/problems/contains-duplicate/
// Time: O(n) | Space: O(n)

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>ct (nums.begin(), nums.end());
        return ct.size() != nums.size();
    }
};