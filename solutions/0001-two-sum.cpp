// 1. Two Sum
// Easy | Array
// https://leetcode.com/problems/two-sum/description/
// Time: O(n) | Space: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> set;
        for (int i = 0; i < nums.size(); i++){
            if(set.count(target - nums[i])){
                return {set[target - nums[i]], i};
            }
            else{
                set[nums[i]] = i;
            }
        }
        return {0,0};
    }
};